#include <stdio.h>
#include <ctype.h>
void main() 
{
    char str[] = "FIRSTBIT";
    int i = 0;

    printf("Lowercase string: ");
    while (str[i] != '\0') 
	{
        printf("%c", tolower(str[i]));
        i++;
    }
}