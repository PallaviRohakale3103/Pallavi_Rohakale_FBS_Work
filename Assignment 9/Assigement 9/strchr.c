#include <stdio.h>
#include <string.h>
void main()
 {
    char str[] = "FirstBitInstitute";
    char ch = 'i';
    int count = 0;
    char *ptr = str;
    while ((ptr = strchr(ptr, ch)) != NULL) {
        count++;
        ptr++; 
    }

    printf(" '%c' found %d\n \"%s\"\n", ch, count, str);

}
