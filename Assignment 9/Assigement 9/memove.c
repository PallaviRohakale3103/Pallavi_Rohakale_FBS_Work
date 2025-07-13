#include <stdio.h>
#include <string.h>
void main()
{
    char str[] = "FirstBitAcademy";
    memmove(str + 5, str, 5); 
    printf("after memmove: %s\n", str);

}