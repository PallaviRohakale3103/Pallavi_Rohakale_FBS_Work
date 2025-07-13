#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="c,java,python,html";
	char *token;
	token=strtok(str1,",");
	while(token!=NULL)
	{
	printf("%d\n",token);
	token=strtok(NULL,",");
    }
}