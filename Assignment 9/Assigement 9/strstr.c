#include <stdio.h>
#include <string.h>
void main() 
{
    char str[]="Welcome to FirstBit solution";
    char sub[]="FirstBit";

    char *ptr=strstr(str,sub); 

    if (ptr != NULL)
        printf("Substring found at position: %ld\n",ptr);
}