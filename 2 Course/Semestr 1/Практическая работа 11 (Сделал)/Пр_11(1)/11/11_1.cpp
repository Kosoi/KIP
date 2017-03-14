//
//  main.cpp
//  Пр_11(1)
//
//  Created by Yan Kosinskiy on 21.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<curses.h>
using namespace std;
int pr11_1()
{
    float x,z;
    printf("Введите x: ");
    scanf("%f",&x);
    z=(sqrt(x)-7*x+10)/(sqrt(x)-8*x+12);
    printf("Ответ: %f ",z);
    return 0;
}
