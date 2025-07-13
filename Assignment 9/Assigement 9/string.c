#include<stdio.h>
int stringlen(char*);
void main()
{
	char str[]="firstbit";
	strlen(str);
    printf(strlen);
	
	
}
int stringlen(char* ch)
{
	int i=0;
    while(ch[i]!='\0')
	{    
		i++;
	}
	return i;
}


//#include<stdio.h>
//void main()
//{
//	char str[10]="firstbit";
//	stringrev(str)
//	
//}
//char* stringrev()
