#include<stdio.h>
void main()
{
	int n = 121;
	int rev = 0;
	int temp = n;
	
	while(temp > 0)
	{
		int digit = temp % 10;
		rev = rev * 10 + digit;
		temp = temp/10;
	}
	if(rev == n)
	printf("palindrome\n");
	else 
	printf("Not palindrome\n");
}