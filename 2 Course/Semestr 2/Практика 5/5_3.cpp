#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;
int main (){
    
    int *num,total=0,i=0,j=0;
    
    srand(time(0));
    setlocale(LC_ALL,"rus");
    
    cout<<"\nКоличестов учеников : ";cin>>j;
    
    num=new int[j];
    
    srand((unsigned)time(0));
    
    for(i=0;i<j;i++){
        num[i]=rand()%80;
        cout<<" "<<num[i];
    }
    
    for(i=0;i<j;i++)
        if (num[i]<30)
            total=total+400;
        else
            total=total+200;
    
    cout<<"\nНеобходимое количество молока "<<total<<" мл"<<"\n";
    
    return 0;
}
