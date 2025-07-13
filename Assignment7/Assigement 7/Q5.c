#include<stdio.h>
void main() 
{
    int arr[5],i;
    printf("Enter 5 numbers\n");
    for(i = 0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Alternate elements\n");
    for(i = 0;i<5;i+=2)
        printf("%d\n",arr[i]);
}