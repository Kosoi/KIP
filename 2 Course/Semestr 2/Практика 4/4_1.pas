program sd;
uses crt;
const N=15;
type massiv=array[1..N] of integer;
var a,b:massiv;
i,sum1,sum2:integer;
Begin
TextColor(0); 
TextBackGround(15); 
clrscr;
Randomize;
sum1:=0;
sum2:=0;
write('a[i]=');
for i:=1 to N do
begin
a[i]:=Random(10)+1;
write(a[i]:3);
sum1:=sum1+a[i];
end;
writeln;
write('b[i]=');
for i:=1 to N do
begin
b[i]:=a[i]*a[i]-a[i];
write(b[i]:3);
sum2:=sum2+b[i];
end;
writeln;
writeln('сумма 1= ',sum1);
writeln('сумма 2= ',sum2);
writeln('сумма 1 - сумма 2 = ',sum1-sum2);
End.