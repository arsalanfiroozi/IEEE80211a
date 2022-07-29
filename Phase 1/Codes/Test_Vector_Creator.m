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