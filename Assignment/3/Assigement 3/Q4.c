#include<stdio.h>
void main()
{

    int n = 7;  
    int i = 2;
    int Prime = 1;  
    
    while (i <= n / 2) {
        if (n % i == 0) {
            Prime = 0;  
            break;
        }
        i++;
    }

    if (n <= 1) {
        printf("Not Prime\n");
    } else if (Prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

}