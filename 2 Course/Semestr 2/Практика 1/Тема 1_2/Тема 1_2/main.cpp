//
//  main.cpp
//  Тема 1_2
//
//  Created by Yan Kosinskiy on 15.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
int main()
{int n,s,p;
    float l,k;
    cout<<"Введите начальный капитал k = ";cin>>k;
    cout<<"Введите ппроцент , который ежемесечно увеличивает ваш капитал p = "; cin>>p;
    cout<<"Введите сумму, которую вы хотите накопить s = ";cin>>s;
    n=0;
    do {
    l=(k*p)/100;
    k=l+k;
        n=n+1;}
    while (k<s);
    cout<<n/12<<"лет"<<n%12<<"месяц\n";
}
