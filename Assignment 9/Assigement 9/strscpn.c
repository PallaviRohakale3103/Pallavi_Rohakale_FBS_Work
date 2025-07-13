#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="firstbit123";
	char str2[]="1234567890";
	int index=strcspn(str1,str2);
	printf("%d\n",index);
}