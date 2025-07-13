#include <stdio.h>
int search(int *arr,int size,int num);
int main() 
{
    int arr[5],i,num,found;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
	 {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&num);
    found=search(arr,5,num);

    if(found)
    {
    	printf(" found\n");  
	}  
	else
	{
		printf("not found\n");
	} 
	return 0;
}
int search(int *arr,int size,int num)
{
	int i;
	for(i=0;i<5;i++)
	{
		 if(arr[i]==num) 
		 {
		 	return 1;
		 }
	}
}


