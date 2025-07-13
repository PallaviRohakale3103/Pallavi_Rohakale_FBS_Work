#include<stdio.h>
#include<stdlib.h>
int calculate_sum(int *arr,int n);
int main() 
{
    int n,*arr;
    printf("entr number of element:\n");
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
	{
		 printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int sum=calculate_sum(arr,n);
    printf("Sum = %d\n",sum);
    free(arr);
    return 0;
}
int calculate_sum(int *arr,int n)
{
	int sum=0;
	for(int i = 0; i < n; i++)
	 {
	 	sum+=arr[i];
	 }
	 return sum;
}

