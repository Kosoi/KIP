//
//  main.cpp
//  Тема2_5
//
//  Created by Yan Kosinskiy on 15.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <curses.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    
    int v;
    printf ("Vvedite Wozrost ot 1 do 99: ");
    scanf("%i", &v);
    if (v >= 1 && v <= 99) {
        
        if (v == 1) { printf("Mne %d god \n", v); }
        for (int i = 2; i<5; i++)
        {
            if (v == i) printf("Mne %d goda \n", v);
        }
        
        for (int i = 5; i<21; i++)
        {
            if (v == i) printf("Mne %d let \n", v);
        }
        
        if (v >= 21) {
            switch (v % 10) {
                case 1: printf("Mne %d god \n", v); break;
                case 2: printf("Mne %d goda \n", v); break;
                case 3: printf("Mne %d goda \n", v); break;
                case 4: printf("Mne %d goda \n", v); break;
                default: printf("Mne %d let \n", v);
            }
        }
        
    }
    else printf("NETY");
    
    
    system("pause");
    return 0;
}
