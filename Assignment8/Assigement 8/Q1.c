#include <stdio.h>
void find_min_max(int *arr,int size,int *min,int *max);
void main() 
{
    int arr[5]; 
    int i, min, max;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }
    find_min_max(arr,5,&min,&max);
    printf("Minimum number = %d\n",min);
    printf("Maximum number = %d\n",max);
}
void find_min_max(int *arr,int size,int *min,int *max)
{
	int i;
	*min = arr[0];
    *max = arr[0];
     for(i = 1; i < size; i++) 
	{
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}



