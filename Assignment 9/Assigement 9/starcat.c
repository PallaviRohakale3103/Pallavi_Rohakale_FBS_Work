#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50]="first";
	char str2[]="bit";
	strcat(str1,str2);
	printf("concatenated string:%s",str1);
}