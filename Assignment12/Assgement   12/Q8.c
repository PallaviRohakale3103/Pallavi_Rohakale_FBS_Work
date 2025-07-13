#include<stdio.h>
#include<stdlib.h>
void merge_arrays(int *arr,int *brr,int *crr,int size1,int size2);
int main()
{
	int i;
	int size1=5,size2=5;
	int *arr = (int *)malloc(size1 * sizeof(int));
	int *brr = (int *)malloc(size2 * sizeof(int));
    int *crr = (int *)malloc((size1+size2) * sizeof(int));
    if (arr==NULL||brr==NULL||crr==NULL) {
    	printf("Memory allocation failed!\n");
    	return 1;
	}
	int temp1[]={44,12,66,2,5};
    int temp2[]={10,7,88,3,15};
    
    for(i=0;i<size1;i++){
	arr[i]=temp1[i];
    }
    for(i=0;i<size2;i++){
	brr[i]=temp2[i];
    }
    merge_arrays(arr,brr,crr,size1,size2);
    
    printf("merged arrays:");
    for(i=0;i<size1+size2;i++)
    {
    	printf("%d",crr[i]);
	}
	printf("/n");
	free(arr);
	free(brr);
	free(crr);
	return 0;
}
void merge_arrays(int *arr,int *brr,int *crr,int size1,int size2)	
{ 
   int i,j;
   for(i=0;i<size1;i++)
   {
   	crr[i]=arr[i`];
   }
    
	for(j=0;j<size1;j++)
   {
   	crr[i]=brr[j];
   	i++;
   }
	
}	

