#include <stdio.h>
#include <stdlib.h>
void add_arrays(int *arr,int *brr,int *crr,int size);
int main()
{
	int *arr,*brr,*crr;
	int i,size=5;
	arr = (int *)malloc(5 * sizeof(int));
	brr = (int *)malloc(5 * sizeof(int));
    crr = (int *)malloc(5 * sizeof(int));
    if (arr==NULL||brr==NULL||crr==NULL) {
    	printf("Memory allocation failed!\n");
    	return 1;
	}
    int temp1[]={1,2,3,4,5};
    int temp2[]={10,20,30,40,50};
	for(i=0;i<size;i++)	{
	arr[i]=temp1[i];
	brr[i]=temp2[i];
    }
    add_arrays(arr,brr,crr,size);
    printf("Sum of arrays (crr):");
    for(i=0;i<size;i++) {
        printf("%d",crr[i]);
    }
    printf("/n");
    free(arr);
    free(brr);
    free(crr);
    return 0;
}
void add_arrays(int *arr,int *brr,int *crr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
}