#include<stdio.h>
#include<stdlib.h>
int is_prime(int n);
int main()
{
	int *arr,i;
	arr = (int *)malloc(5 * sizeof(int));
	if (arr == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
	 printf("Prime numbers: ");
    for(i=0;i<5;i++)
    {
    	if(is_prime(arr[i]))
      printf("%d",arr[i]);	
	}
	free(arr);
	return 0;      
}
int is_prime(int n)
{
	int i,count=0;
	if(n<=1)
	return 0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	return(count==2);
}









