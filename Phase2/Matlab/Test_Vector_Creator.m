%% Random Data Creation
clc;
clearvars;
N = 8*25; % Generate 25 Bytes random data for PSDU
B = randi([0 1], N, 1);
f = fopen('Data.txt','w');
for i=1:length(B)
    fprintf(f,'%d\n',B(i));
end
fclose(f);

%% Building Initial Frame for Scrambler
f = fopen('Data.txt','r');
f2 = fopen('In.txt','w');
x = fscanf(f,'%d\n');

% Generate 4 Bits Rate
Rate = fi(5,0,4,0);
Rate_b = Rate.bin;
for i=1:4
    fprintf(f2,'%d\n',Rate_b(i)-'0');
end

% 1 Reserved Bit
fprintf(f2,'0\n');

% 12 Bits Length
Length = fi(length(x)/8,0,12,0);
Length_b = Length.bin;
for i=1:12
    fprintf(f2,'%d\n',Length_b(i)-'0');
end

% Parity Bit of PSDU Bits
p = sum(x==1);
p = mod(p,2);
fprintf(f2,'%d\n',p);

% 6 Bit Tail
for i=1:6
    fprintf(f2,'0\n');
end

% 16 Bit of Service
for i=1:16
    fprintf(f2,'%d\n',0);
end

% Data(PSDU)
for i=1:length(x)
    fprintf(f2,'%d\n',x(i));
end

% 6 Bit Tail
for i=1:6
    fprintf(f2,'0\n');
end

% Pad
for i=1:24 - mod(N+16+6,24)
    fprintf(f2,'0\n');
end

fclose(f2);
fclose(f);
%% Scrambler
f = fopen('In.txt','r');
f2 = fopen('Out_Scramble.txt','w');
y = fscanf(f,'%d\n');

% Premeable, 12 Bits
for i=1:12
    fprintf(f2,'%d\n',1);
end

% Service, 24 Bits
for i=1:24
    fprintf(f2,'%d\n',y(i));
end

x = y(25:end);

state0 = 111;
dec2bin(state0);
state = state0;
Seeds = [];
for i=1:length(x) % Algorithm of Scrambling
    Seeds(i) = state;
    BinS = flip(dec2bin(state));
    if(length(BinS)<4)
        b4 = '0';
    else
        b4 = BinS(4);
    end
    if(length(BinS)<7)
        b7 = '0';
    else
        b7 = BinS(7);
    end
    if((x(i)==1 && b4~=b7) || (x(i)==0 && b4==b7))
        out = 0;
    else
        out = 1;
    end
    fprintf(f2,'%d\n',out);
    state = mod(state*2,128);
    if(b4~=b7)
        state = state + 1;
    end
end

fclose(f2);
fclose(f);
%% Encoder Rate: 1/2
clearvars;
f = fopen('Out_Scramble.txt','r');
f2 = fopen('Out_Encoder.txt','w');
% y = fscanf(f,'%d\n');
% 
% % Premeable, 12 Bits
% for i=1:12
%     fprintf(f2,'%d\n',1);
% end
% 
% % Service, 24 Bits
% for i=1:24
%     fprintf(f2,'%d\n',y(i));
% end
% 
% x = y(25:end);
x = fscanf(f,'%d\n');
state = 0;
for i=1:length(x)
    state_bin = dec2bin(state);
    for j=1:6-length(state_bin)
        state_bin = ['0' state_bin];
    end
    state_bin = state_bin - '0';
    xor1 = xor(state_bin(7-1),xor(state_bin(7-4),xor(state_bin(7-5),x(i))));
    even = xor(xor1, state_bin(7-2));
    odd = xor(xor1, state_bin(7-6));
    fprintf(f2,'%d\n %d\n', even, odd);
    state = floor(state / 2 + 2^5*x(i));
    x(i);
end

fclose(f2);
fclose(f);

%% DeCoder Dynamic Programming
clearvars;
f = fopen('Out_Encoder.txt','r');
f2 = fopen('Out_DeCoder2.txt','w');
x = fscanf(f,'%d\n');

Cost = zeros(2^6,1);
Cost_next = zeros(2^6,1);
Paths = zeros(2^6,100);
i=0;
for L=1:2:length(x)
    i = i + 1;
    x2 = x(L)*2+x(L+1);
    for j=1:2^6
        state = j-1;
        state1 = mod(2*state,2^6);
        state2 = mod(2*state+1,2^6);

        state1_bin = dec2bin(state1);
        state2_bin = dec2bin(state2);
        state_bin = dec2bin(state);
        for k=1:6-length(state1_bin)
            state1_bin = ['0' state1_bin];
        end
        state1_bin = state1_bin - '0';
        for k=1:6-length(state2_bin)
            state2_bin = ['0' state2_bin];
        end
        state2_bin = state2_bin - '0';
        for k=1:6-length(state_bin)
            state_bin = ['0' state_bin];
        end
        state_bin = state_bin - '0';

        xor1 = xor(state1_bin(7-1),xor(state1_bin(7-4),xor(state1_bin(7-5),state_bin(7-6))));
        even1 = xor(xor1, state1_bin(7-2));
        odd1 = xor(xor1, state1_bin(7-6));
        xor2 = xor(state2_bin(7-1),xor(state2_bin(7-4),xor(state2_bin(7-5),state_bin(7-6))));
        even2 = xor(xor2, state2_bin(7-2));
        odd2 = xor(xor2, state2_bin(7-6));

        cost1 = Cost(state1+1)+mod(bitxor(even1*2+odd1,x2),2)+floor(bitxor(even1*2+odd1,x2)/2);
        cost2 = Cost(state2+1)+mod(bitxor(even2*2+odd2,x2),2)+floor(bitxor(even2*2+odd2,x2)/2);

        if(cost1<cost2)
            Paths(j,i) = state1;
            Cost_next(j) = cost1;
        else
            Paths(j,i) = state2;
            Cost_next(j) = cost2;
        end
    end
    Cost = Cost_next;
end

Out = zeros(L,1);
[~,minn] = min(Cost);
minn = minn - 1;
for L=i:-1:1
    state_bin = dec2bin(minn);
    for k=1:6-length(state_bin)
        state_bin = ['0' state_bin];
    end
    state_bin = state_bin - '0';
    Out(L) = state_bin(7-6);
    
    minn = Paths(minn+1,L);
end

for L=1:i
    fprintf(f2,"%d\n",Out(L));
end

fclose(f2);
fclose(f);
%% Decoder Greedy
% clearvars;
% f = fopen('Out_Encoder.txt','r');
% f2 = fopen('Out_DeCoder.txt','w');
% x = fscanf(f,'%d\n');
% 
% state = 0;
% x2 = 0;
% for i=1:length(x)
%     x2 = mod(x2*2+x(i),4);
%     
%     if(mod(i,2)==0)
%         n_state1 = floor(state/2);
%         n_state2 = floor(state/2)+2^(6-1);
% 
%         state_bin = dec2bin(state);
%         for j=1:6-length(state_bin)
%             state_bin = ['0' state_bin];
%         end
%         state_bin = state_bin - '0';
% 
%         o_xor1 = xor(state_bin(7-1),xor(state_bin(7-4),xor(state_bin(7-5),0)));
%         o_xor2 = xor(state_bin(7-1),xor(state_bin(7-4),xor(state_bin(7-5),1)));
% 
%         even1 = xor(o_xor1, state_bin(7-2));
%         odd1 = xor(o_xor1, state_bin(7-6));
%         even2 = xor(o_xor2, state_bin(7-2));
%         odd2 = xor(o_xor2, state_bin(7-6));
% 
%         if(mod(bitxor(even1*2+odd1,x2),2)+floor(bitxor(even1*2+odd1,x2)/2)<mod(bitxor(even2*2+odd2,x2),2)+floor(bitxor(even2*2+odd2,x2)/2))
%             state = n_state1;
%             fprintf(f2,'0\n');
%         else
%             state = n_state2;
%             fprintf(f2,'1\n');
%         end
%     end
% end
% 
% fclose(f2);
% fclose(f);
%%
clc
clearvars
f1 = fopen('Out_Scramble.txt','r');
f2 = fopen('Out_DeCoder2.txt','r');
x1 = fscanf(f1,'%d\n');
x2 = fscanf(f2,'%d\n');

sum(x1-x2)

fclose(f1);
fclose(f2);

%% Seed Finder
clearvars;
f = fopen('Out_Scramble.txt','r');
x = fscanf(f,'%d\n');
x = x(37:end);
fclose(f);
% x = x - '0';
c = xor(x(1),x(5)); % Equations Described in report
f = xor(x(2),c);
b = xor(xor(c,f),x(6));
e = xor(x(3),b);
a = xor(x(7),xor(b,e));
d = xor(x(4),a);
g = xor(x(5),xor(c,d));
[g,f,e,d,c,b,a];
state0 = a + b*2 + c*4 + d*8 + e*16 + f*32 + g*64

%% DeScramble

f = fopen('Out_Scramble.txt','r');
f2 = fopen('Out_DeScramble.txt','w');
y = fscanf(f,'%d\n');
for i=13:36 % Service Bits
    fprintf(f2,'%d\n',y(i));
end

x = y(37:end);
state = state0;
Seeds = [];
for i=1:length(x)
    Seeds(i) = state;
    BinS = flip(dec2bin(state));
    if(length(BinS)<4)
        b4 = '0';
    else
        b4 = BinS(4);
    end
    if(length(BinS)<7)
        b7 = '0';
    else
        b7 = BinS(7);
    end
    if((x(i)==1 && b4~=b7) || (x(i)==0 && b4==b7))
        out = 0;
    else
        out = 1;
    end
    fprintf(f2,'%d\n',out);
    state = mod(state*2,128);
    if(b4~=b7)
        state = state + 1;
    end
end

fclose(f2);
fclose(f);

%% Check the equality of input and output of the system
clearvars;
clc;
f1 = fopen('In.txt','r');
f2 = fopen('Out_DeScramble.txt','r');
x1 = fscanf(f1,'%d\n');
x2 = fscanf(f2,'%d\n');
sum(x1-x2)