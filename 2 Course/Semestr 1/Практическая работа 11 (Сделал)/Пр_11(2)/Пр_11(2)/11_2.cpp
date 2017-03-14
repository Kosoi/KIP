//
//  main.cpp
//  Пр_11(2)
//
//  Created by Yan Kosinskiy on 21.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int pr11_2()
{ int a,b,c,r;
    float g,d,h;
    cout<<"Введите а: "; cin>>a;
    cout<<"Введите b: "; cin>>b;
    c=180-(a+b);
    cout<<"Введите r: "; cin>>r;
    g=2*r*sin(a);
    d=2*r*sin(b);
    h=2*r*sin(c);
    cout<<"Сторона A= "<<g;
    cout<<"Сторона В= "<<d;
    cout<<"Сторона C= "<<h;
    return 0;
}
