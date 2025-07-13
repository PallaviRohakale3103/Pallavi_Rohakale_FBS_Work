#include <stdio.h>
#include <string.h>
void main() 
{
    char str1[] = "FirstBit";
    char str2[] = "FirstBus";
    int result = memcmp(str1, str2, 5);

    if (result == 0)
        printf("First 5 characters are equal\n");
    else
        printf("First 5 characters are not equal\n");
}
