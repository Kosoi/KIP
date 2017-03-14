//
//  main.cpp
//  Пр_17(2)
//
//  Created by Yan Kosinskiy on 07.01.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    long int n;
    int mult = 1;
    cout <<"Введиет n= "; cin>>n;
    while (n != 0)
    {
        mult = mult*(n % 10);
        n = n / 10;
    }
    cout<<"Произведение всех чисел = "<<mult<<"\n";
    system("pause"); 
    
}
