#include<stdio.h>
#include<stdlib.h>
int find_min(int *arr,int n);
int find_max(int *arr,int n);
int main()
{
    int n,*arr;
    printf("Enter the number of element:\n");
    scanf("%d", &n);
    arr=(int *)malloc(n *sizeof(int));
   if(arr==NULL)
   {
    printf("memory allocation failed\n");
	return 1;  	
   }
   printf("enter %d number\n",n);
   for(int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int min = find_min(arr,n);
    int max = find_max(arr,n);
    printf("Minimum number = %d\n",min);
    printf("Maximum number = %d\n",max);
    free(arr);
    return 0;
}
int find_min(int *arr,int n)
{
  int min=arr[0];
  for(int i=1;i<n;i++)
  {
  	if(arr[i]<min)
	  {
	  	min=arr[i];
	  }
  }
  return min;
}
int find_max(int *arr,int n)
{
  int max=arr[0];
  for(int i=1;i<n;i++)
  {
  	if(arr[i]>max)
	  {
	  	max=arr[i];
	  }
  }
  return max;
}
	
	