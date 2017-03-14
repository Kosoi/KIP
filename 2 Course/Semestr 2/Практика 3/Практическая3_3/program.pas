program qwe1;
uses crt;
var e,an,s:real;
n:integer;
begin
clrscr;
repeat
write('e>0 e=');
readln(e);
until e>0;
if e>=3 then s:=3
else
begin
n:=0;
an:=3;
s:=an;
while an>e do
begin
n:=n+1;
an:=an/2;
s:=s+an;
end;
end;
write('S=',s:0:4);
readln
end.
