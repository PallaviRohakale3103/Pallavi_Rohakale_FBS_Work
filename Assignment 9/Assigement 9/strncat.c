#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50]="first";
	char str2[20]="bitsolution";
	strncat(str1,str2,3);
	printf("%s\n",str1);
}