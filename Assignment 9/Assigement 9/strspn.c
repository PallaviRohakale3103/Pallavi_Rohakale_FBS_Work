#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="123456abc";
	char str2[]="1234567890";
	int len=strspn(str1,str2);
	printf("%d\n",len);
}