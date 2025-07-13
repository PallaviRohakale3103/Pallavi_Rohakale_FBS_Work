#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,n,len;
	printf("enetr the string");
	gets(str);
    printf("enter the index to remove");
    scanf("%d",&n);
    len=strlen(str);
    if(n<0||n>=len){
    	printf("invalid index\n");
    	return;
	}
	for(i=n;i<n;i++){
		str[i]=str[i+1];
	}
	printf("%s\n",str);
}