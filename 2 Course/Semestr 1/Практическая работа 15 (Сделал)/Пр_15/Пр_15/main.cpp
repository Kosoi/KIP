//
//  main.cpp
//  Пр_15
//
//  Created by Yan Kosinskiy on 11.01.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <curses.h>
#include <iostream>

int ()
{
    int i, j, n, counter;
    int matr[100][100], temp[100];
    

    printf("Введите размерность квадратной матрицы:\n");
    scanf("%d",&n);
    
    //Заполнение матрицы рандомом и вывод
    printf("Исходная матрица:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            matr[i][j]=random()%100-80;
            printf("%4d",matr[i][j]);
        }
        printf("\n");
    }
    
    //Меняем строки 1<->2, 3<->4...
    printf("Видоизмененная матрица:\n");
    counter=n;
    if (n%2!=0)
        counter--;
    for (i=0; i<counter; i+=2)
    {
        for (j=0; j<n; j++)
        {
            temp[j]=matr[i][j];
            matr[i][j]=matr[i+1][j];
            matr[i+1][j]=temp[j];
        }
    }
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
            printf("%4d",matr[i][j]);
        printf("\n");
    }
    
    
    
    //Поиск первой строки, не содержащей отрицательных
    for (i=0; i<n; i++)
    {
        counter=0;
        for (j=0; j<n; j++)
            if (matr[i][j]<0)
                counter++;
        if (counter==n)
        {
            printf("Строка %d первая не содержит положительных",i);
            i=n;
        }
    }
    
    
  
    for (i=0; i<100; i++)
        temp[i]=0;
    
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            temp[matr[i][j]+80]++;
    
    printf("\n");
    counter=-100;		
    for (i=0; i<100; i++)
        if (temp[i]>1 && i>counter)
            counter=i;
    
    if (counter==-100)
        printf("Все числа встречаются не более одного раза");
    else
        printf("Максимальное число: %d (встречается %d раз)",counter-80,temp[counter]);
    
    
    return(0);
}
