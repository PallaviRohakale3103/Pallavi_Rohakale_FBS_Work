#include<stdio.h>
void main()
{
    int arr[5] = {44, 12, 66, 2, 5};
    int brr[5] = {10, 7, 88, 3, 15};
    int c[10];
    int i, j;

    for(i=0;i<5;i++)
	{
        c[i]=arr[i];
    }

    for(j=0;j<5;j++) 
	{
        c[i]=brr[j];
        i++;
    }
    printf("Merged array: ");
    for(i=0;i<10;i++)
	{
        printf("%d ",c[i]);
    {
}