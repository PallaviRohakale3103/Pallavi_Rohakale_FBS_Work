#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i = 0, len1 = 0, len2 = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[len1] != '\0' && str1[len1] != '\n')
	 {
        len1++;
    }
    
    while (str2[len2] != '\0' && str2[len2] != '\n')
	{
        len2++;
    }

    if (len1 > len2)
    {
        printf("The larger string is: %s", str1);
    } else if (len2 > len1) {
        printf("The larger string is: %s", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}
