#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="firstbitsolutiuon";
	char str2[20];
	strncpy(str2,str1,5);
	str2[5]='\0';
	printf("%s\n",str2);
}