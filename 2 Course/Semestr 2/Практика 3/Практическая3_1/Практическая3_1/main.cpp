//
//  main.cpp
//  Практическая3_1
//
//  Created by Yan Kosinskiy on 24.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{int i,n,s = 0;
    cout<<"Сколько слоёв в пирамиде? \n n= ";cin>>n;
    for(i=1;i<n;i++)
    {s=s+i*i;
        cout<<"\nВ "<<i<<"-м слое "<<i*i<<" шаров"<<"\n";
    }
    cout<<"\nВ пирамиде из "<<n<<" слоев "<<s<<" шаров "<<"\n";
}
