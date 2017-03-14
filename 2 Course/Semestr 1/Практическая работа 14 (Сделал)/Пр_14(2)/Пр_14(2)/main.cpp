//
//  main.cpp
//  Пр_14(2)
//
//  Created by Yan Kosinskiy on 25.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int qwer()
{ float sum;
    int n,imax,i;
    cout<<"Введите кол-во элементов";cin>>n;
    float *a=new float [n]; float *b=new float [n];
    cout<<"Введите элементы"<<endl;
    for (int i=0; i<n;i++)
        cin>>a[i];
    for ( int i=imax=0;i<n;i++)
        if ((fabs(a[i]))>(fabs(a[imax])))
            imax=i;
    cout<<"максимальное по модулю= "<<a[imax];
    cout<<"Максимальный элемент- "<<imax+1;
    for( int i=0;i<n;i++)
        if (a[i]>0)
            i=i+1;
    sum+=a[i];
    cout<<"Сумма элементов полсе первого положительного элемента =   "<<sum;
    return 0;
    
}


