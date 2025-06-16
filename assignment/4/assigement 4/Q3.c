//print perfect number in given 1 to n range
//print perfect number in given range  1 to n 
#include<stdio.h>
int main()
{
	int n,i=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	printf("perfect number from 1 to %d are:\n",n);
	
	while(i<=n){
		int sum=0;
		int j=1;
		
	while(j < i){
		if(i%j==0)
		sum+=j;
		j++;
	}
	if(sum==i)
	+
	printf("%d",i);
	i++;
	}
	return 0;
}