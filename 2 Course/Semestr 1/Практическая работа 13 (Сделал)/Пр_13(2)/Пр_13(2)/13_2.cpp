//
//  main.cpp
//  Пр_13(2)
//
//  Created by Yan Kosinskiy on 21.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int Fact(int n)
{int i;
    float f;
    f=1;
    for(i=1;i<n;i++)
        f=f*i;
n=f;
    return(n);
}
int pr13_2()
{
    int i,n;
    float s;
    do
    {cout<<"Введите n: ";cin>>n;}
    while ((n>=2&&n<=16)&&(n%2!=0));
        i=0;
        s=0;
    while (i<n)
    {i=i+2;
        s=s+Fact(i);}
    
    
        cout<<"Сумма: "<<s;
    return 0;
    
}
