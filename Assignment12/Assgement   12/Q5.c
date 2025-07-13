#include<stdio.h>
#include <stdlib.h>
void alternate(int *arr, int n);
int main() 
{
    int n,*arr;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d numbers\n",n);
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Alternate elements\n");
    alternate(arr,n);
    free(arr);
    return 0;
}
void alternate(int *arr,int n)
{
	for(int i = 0;i<n;i+=2)
	{
		printf("%d\n",arr[i]);
	}
    
}