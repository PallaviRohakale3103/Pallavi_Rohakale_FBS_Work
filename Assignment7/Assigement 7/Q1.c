#include <stdio.h>
void main() 
{
    int arr[5]; 
    int i, min, max;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i = 1; i < 5; i++) 
	{
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Minimum number = %d\n",min);
    printf("Maximum number = %d\n",max);
}