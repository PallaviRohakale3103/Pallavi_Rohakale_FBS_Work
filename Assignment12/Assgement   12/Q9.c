#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int size);
int main()
{
	int *a,i,size=5;
	a = (int *)malloc(size * sizeof(int));
	if (a==NULL){
		printf("memory alloacation failed\n");
		return 1;
	}
	printf("enter %d number:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a,size);
	free(a);
	return 0;
}
void reverse(int *arr,int size)
{
   int i;
   printf("reveserd array:");
   	for(i=size-1;i>=0;i--)
   	{
   		printf("%d",arr[i]);
	}
	printf("\n");
}
