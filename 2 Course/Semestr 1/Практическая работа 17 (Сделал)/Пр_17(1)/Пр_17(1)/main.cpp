#include <curses.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{
    
    char *fname = "data.txt";
    char t[1024], *y;
    
    FILE *r;
    r = fopen(fname, "r");
    fgets(t, 1024, r);
    
    printf("\nScitannye dannye:\n");
    printf("\n%s", t);
    
    y = strtok(t, " ,.");
    while (y != NULL) {
        if (y[0] == 'e' || y[0] == 'i' ||
            y[0] == 'o' || y[0] == 'u' ||
            y[0] == 'y' || y[0] == 'a') {
            printf("\nS Glasnoy = %s", y);
        } 
        y = strtok(NULL, " ,."); 
    } 
    system("pause"); 
    return 0; 
    
}
