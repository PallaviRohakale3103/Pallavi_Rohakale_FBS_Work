#include<stdio.h>
void main()
{
	char str[100];
	int i;
	printf("enetr the string");
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'){
		str[i]='$';
		}
    }
			printf("%s\n",str);
}