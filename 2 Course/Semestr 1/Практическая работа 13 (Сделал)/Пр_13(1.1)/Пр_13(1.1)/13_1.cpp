//
//  main.cpp
//  Пр_13(1.1)
//
//  Created by Yan Kosinskiy on 10.01.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <curses.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;
int pr13_1()
{
    int a[6];
    int i,k,m,sum=0;
    printf("\n Массив: \n ");
    for(i=1;i<6;i++)
    {
        a[i]=rand()%20-7;
        printf("%d",a[i]);
    }
    printf("\n Введите промежуток: ");
    scanf("%i , %i",&k, &m);
    for(i=k;i<m;i++)
        sum=sum+a[i];
    printf("Сумма элементов промежутка от %d до %d = %d \n",k,m, sum);
    system("pause");
    return(0);
}
