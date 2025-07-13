#include <stdio.h>
#include <string.h>

void main()
 {
    char str[] = "FirstBitTest";
    char ch = 't';

    char *ptr = strrchr(str, ch); 

    if (ptr != NULL)
        printf("Last occurrence of '%c' is at position: %ld\n", ch, ptr - str);
    else
        printf("Character '%c' not found.\n", ch);
        
}