//
//  main.cpp
//  Пр_16(1)
//
//  Created by Yan Kosinskiy on 26.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <time.h>
#include <random>
using namespace std;
int main()
{
    int n,m,j,i,k,buf;
    int **a;
    int *ne4etnoe;
    int randNumber=rand()%4;
   // NSLog(@"%d", randNumber);
    cout<<"n= ";cin >>n;
    cout<<"m= ";cin >>m;
    cout<<"Исходная матрица"<<endl;
    a=new int *[n];
    for(i=0;i<n;i++)
    { a[i]=new int [m];
        for(j=0;j<m;j++)
        {
            a[i][j]=rand()%20-7;
            cout<<""<<a[i][j];
        }
        cout<<""<<endl;
    }
    ne4etnoe=new int [n];
    for(i=0;i<n;i++)
    {
        ne4etnoe[i]=0;
        for(j=0;j<m;j++)
            if (a[i][j] % 2!=0)
                ne4etnoe[i]=ne4etnoe[i]+a[i][j];
    }
    for(i=0;i<n-1;i++)
        for(k=i+1;k<n;k++)
            if (ne4etnoe[i]>ne4etnoe[k])
            {buf=ne4etnoe[i];
                ne4etnoe[i]=ne4etnoe[k];
                ne4etnoe[k]=buf;
                for(j=0;j<m;j++)
                {buf=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=buf;
                }
            }
    cout<<"Сортировка"<<endl;
    cout<<""<<endl;
    for(i=0;i<n;i++)
    {
        cout<<""<<endl;
        for(j=0;j<m;j++)
            cout<<""<<a[i][j];
    }
    for(i=0;i<n;i++)
        delete [] a[i];
    delete [] a;
    delete [] ne4etnoe;
}
