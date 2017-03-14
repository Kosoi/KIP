program milk;
uses crt;
const n = 150;
var 
num: array [1..n] of integer;
total,i,j: integer;
begin
TextColor(0); 
TextBackGround(15); 
clrscr;
total:=0;
write('Количество учеников: ');
readln(j);
for i:= 1 to j do
readln(num[i]);
for i:=1 to j do
if num[i] < 30 then
total:= total+400
else
total:=total+200;
write('Необходимое количество молока: ',total,' мл');
end.