//
//  main.cpp
//  Пр_14
//
//  Created by Yan Kosinskiy on 25.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{  float a[50];
    int nmax=0, n;
    float s=0, max;
    
    cout<<"n=";cin>>n;
    
    for(int i=0;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    max=a[0];
    for(int i=0;i<=n;i++)
        if (fabs(a[i])>max)
        {
            max=a[i];
            nmax=i;
        }
    cout <<"nmax="<<nmax<<"\t"<<"max= "<<max<<endl;
    for(int i=0;i<=n;i++)
        if (a[i]>0)
        {
            max=a[i];
            nmax=i;
        }
    nmax++;
    for (int i=nmax; i<=n; i++)
        s+=a[i];
    cout<<"s="<<s<<endl;
}







