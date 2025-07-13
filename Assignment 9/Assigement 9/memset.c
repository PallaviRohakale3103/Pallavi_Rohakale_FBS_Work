#include<Stdio.h>
#include<String.h>
void main()
{
	char str[20];
	memset(str,'*',10);
	str[10]='\0';
	printf("%s\n",str);
}

