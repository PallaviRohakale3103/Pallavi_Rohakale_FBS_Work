#include<stdio.h>
void main()
{
  char str[100],ch;
  int i,found=0;
  printf("enter the string:");
  gets(str);
  printf("entr the charcter to serch:");
  scanf("%c",&ch);
  
  for(i=0;str[i]!='\0';i++){
  	if(str[i]==ch)
  	{
  		printf("charcter found at postion%d\n",i);
  		found=1;
  		
	}
  }
  if(found==0){
  	printf("charcter not found\n");
  }
}