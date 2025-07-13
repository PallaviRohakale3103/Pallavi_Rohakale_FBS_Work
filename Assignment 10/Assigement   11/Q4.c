#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	char temp;
	int len;
	printf("enter the string");
	gets(str);
	len=strlen(str);
	if(len<2){
		printf("string short\n");
	}else{
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
		printf("%s\n",str);
		
	}
	
}