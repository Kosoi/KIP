//
//  main.cpp
//  Тема2_3
//
//  Created by Yan Kosinskiy on 15.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
int main()
{int a,b,c,d,max,min;
    cout<<"Введите A= ";cin>>a;
    cout<<"Введите B= ";cin>>b;
    cout<<"Введите C= ";cin>>c;
    if ((a%2==0) && (b%2==0) && (c%2==0)){
        d=a+b+c;
        cout<<"D= \n"<<d;}
    else
      if ((a%2!=0) && (b%2!=0) && (c%2!=0))
    { if ((a>b) && (a>c))
            a=max;
    else
        a=min;
    if ((b>a) && (b>c))
        b=max;
    else
        b=min;
    if ((c>a) && (c>b))
        c=max;
    else
        c=min;
        cout<<"Максимальное= "<<max<<"\n";
        cout<<"Минимальное= "<<min<<"\n";
        
    }
    else
    {  cout<<"\nA= "<<a;
    cout<<"\nB= "<<b;
        cout<<"\nC= "<<c;}
}
