#include<stdio.h>
void main()
{
	char str[100];
	char symbol;
	int i;
	
	printf("entr a string");
	gets(str);
	printf("enetr special symbbol to replce space");
	scanf("%c",&symbol);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]== ' '){
			str[i]=symbol;
		}
	}
	printf("modified string %s\n",str);
}