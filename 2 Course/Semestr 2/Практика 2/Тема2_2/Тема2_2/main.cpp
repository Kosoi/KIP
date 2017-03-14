//
//  main.cpp
//  Тема2_2
//
//  Created by Yan Kosinskiy on 15.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace  std;
int main ()
{int v,f;
    float a;
    cout<<"Введите a= ";cin>>a;
    v=pow(a,3);
    f=pow(2*a,2);
    if (v>f)
        cout<<"v больше f, v= "<<v;
    else
        cout<<"f больше v, f= "<<f<<"\n";
}
