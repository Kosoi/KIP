//
//  main.cpp
//  Пр_11(3)
//
//  Created by Yan Kosinskiy on 29.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
using namespace std;
int pr11_3(void)
{
    setlocale (LC_ALL, "Russian");
    int n,a,b,c,d;
    cout << "Введите число: "; cin >>n;
    a=n%10;
    b=(n%100)/10;
    c=(n%1000)/100;
    d=n/1000;
    if ((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
        cout << "Числа различны!"<<endl;
    else
        cout << "Есть одинаковые цифры!"<<endl;
    system("pause");
    return 0; 
}
