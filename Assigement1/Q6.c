#include<stdio.h>
void main()
{
	char ch = 'k';
	if(ch >= 'A' && ch <= 'Z')
	printf("%c uppercase\n", ch);
	else if(ch >= 'a' && ch <= 'z')
	printf("%c lowercase\n", ch);
	else
	printf("%c not an alphabet\n", ch);
}