#include<stdio.h>
void main()
{
	char str[100];
	int i,count=0;
	printf("enetr  a string");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if((str[i]==' '&& str[i+1]!=' '&&str[i+1]!='\0')||(i==0&&str[i]!=' ')){
			count++;
		}
	}
	printf("total number of word%d\n",count);
}