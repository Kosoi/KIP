//
//  main.cpp
//  Пр_11(4)
//
//  Created by Yan Kosinskiy on 21.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int pr11_4()
{
    double x,y;
    cout<<"Введите х= "; cin>>x;
    cout<<"Введите y= "; cin>>y;
    if ((x>=0)&&(y>= x-6)&&(sqrt(x)+sqrt(y)<=36))
        cout<<"True"<<"\n";
        else
        cout<<"False"<<"\n";
        system("pause");
        return 0;
    
}
