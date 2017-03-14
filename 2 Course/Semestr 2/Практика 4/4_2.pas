Program pr;
uses crt;
Var a:array[1..10] of integer;
i,max,n,min:integer;
Begin
randomize;
TextColor(0); 
TextBackGround(15); 
clrscr;
writeln('n= ');
readln(n);
for i:=1 to n do 
Begin a[i]:=random(100); 
Write(a[i],';'); 
end;
Writeln;
max:=abs(a[1]-a[2]);
min:=abs(a[2]-a[1]);
for i:=1 to n do
if a[i+1]>max then 
max:=a[i+1];
if a[i]<min then 
min:=a[i];
Writeln('max= ',max);
writeln('min= ',min);
Writeln('max-min= ',max-min);
readln;
end.