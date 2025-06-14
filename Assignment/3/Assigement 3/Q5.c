#include<stdio.h>
void main()
{
	int n = 153;
	int sum = 0;
	int res = n;
	
	while(n > 0)
	{
		int digit = n % 10;
		sum += digit * digit * digit;
		n = n / 10;
	}
	if (sum == res)
	printf("Amstorng\n");
	else
	printf("not Amstorng\n");
}
