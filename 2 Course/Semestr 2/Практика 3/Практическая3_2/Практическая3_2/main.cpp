//
//  main.cpp
//  Практическая3_2
//
//  Created by Yan Kosinskiy on 24.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{int n,i,j,k;
    cout<<"n= ";cin>>n;
    for(i=1;i<n;i++)
    {j=1;
        k=1;
        while (j>0)
        {j=j/10;
            k=k*10;
        }
        if ((i*i%k==i))
            cout<<"i=  "<<i*i<<i<<"\n";
            
    }
    
}
