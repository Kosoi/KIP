//
//  main.cpp
//  Пр_18
//
//  Created by Yan Kosinskiy on 07.01.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <curses.h>
//#include <conio.h>
#include <stdio.h>
#include <string.h>


struct NOTE
{
    char NAME[20], TELE[15], BDAY[3];
}
BNOTE[8], T;
int i, j;
char Number[15];

void vvod()
{
    for (i = 0; i<8; i++)
    {
        printf("\nFamilia: ");
        gets(BNOTE[i].NAME);
        if (strlen(BNOTE[i].NAME) == 0)break;
        printf("Telefon: ");
        gets(BNOTE[i].TELE);
        printf("Denb Pozhdeniya (YYYY MM DD): ");
        scanf("%s %s %s", &BNOTE[i].BDAY[0], &BNOTE[i].BDAY[1], &BNOTE[i].BDAY[2]);
        gets(Number);;
    };
}

void sortirovka(){
    for (j = 0; j<8 - 1; j++)
        if ((long)1000 * BNOTE[j].BDAY[0] + 50 * BNOTE[j].BDAY[1] + BNOTE[j].BDAY[2]>
            (long)1000 * BNOTE[j + 1].BDAY[0] + 50 * BNOTE[j + 1].BDAY[1] + BNOTE[j + 1].BDAY[2])
        {
            T = BNOTE[j];
            BNOTE[j] = BNOTE[j + 1];
            BNOTE[j + 1] = T;
        }
}

void vivod()
{
    printf("VbIvod dannyx:");
    for (i = 0; i<8; i++)
    {
        printf("\nImya: %s \n Telefon: %s \n Denb Pozhdeniya: %u %u %u\n\n",
               BNOTE[i].NAME, BNOTE[i].TELE, BNOTE[i].BDAY[0], BNOTE[i].BDAY[1], BNOTE[i].BDAY[2]);
    };
}
void poisk(){
    printf("\nTelefon dlya poiska? ");
    gets(Number);
    j = 0;
    for (i = 0; i<8; i++)
        if (!strcmp(Number, BNOTE[i].TELE))
        {
            printf("\nImya: %s \n Telefon: %s \n Denb Pozhdeniya: %u %u %u\n\n",
                   BNOTE[i].NAME, BNOTE[i].TELE,
                   BNOTE[i].BDAY[0], BNOTE[i].BDAY[1], BNOTE[i].BDAY[2]); j = 1;
        }; 
    if (j == 0) 
        printf("Net cheloveka, y kotorogo takoy telefon!\n\n"); 
} 
int main(void)
{ 
    vvod(); 
    sortirovka(); 
    vivod(); 
    poisk(); 
    getch(); 
}
