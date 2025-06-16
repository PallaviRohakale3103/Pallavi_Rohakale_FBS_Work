#include<stdio.h>
void main()
{
	int n,i=2;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	printf("prime number from 1 to %d are:\n",n);
	while (i<=n)
	{
		int j=2,prime=1;
		while(j<=i/2) {
			if(i%j==0) {
				prime=0;
				break;
			}
			j++;
			
		}
		if(prime)
		{
			printf("%d",i);
		}
		i++;
	}
}