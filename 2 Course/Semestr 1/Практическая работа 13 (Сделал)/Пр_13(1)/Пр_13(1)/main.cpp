//
//  main.cpp
//  Пр_13(1)
//
//  Created by Yan Kosinskiy on 25.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{ int i,s,sm,sd;
    int d[6];
    cout<<"Введите 6 чисел:";
    for(i=1;i<6;i++)
        cin>>d[i];
    s=0;
    sm=0;
    sd=0;
    for(i=1;i<3;i++)
        s=s+d[i];
    for(i=3;i<5;i++)
        sm=sm+d[i];
    for(i=4;i<6;i++)
        sd=sd+d[i];
    cout<<"\nПолученная сумма :\n"<<s;
    cout<<"\nПолученная сумма :\n"<<sm;
    cout<<"\nПолученная сумма :\n"<<sd;
}

        
