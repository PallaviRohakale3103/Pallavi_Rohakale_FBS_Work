#include <stdio.h>
#include <ctype.h>
void main() 
{
    char str[] = "FirstBit";
    int i = 0;
    printf("Uppercase string: ");
    while (str[i] != '\0')
	 {
        printf("%c", toupper(str[i]));
        i++;
     }
}