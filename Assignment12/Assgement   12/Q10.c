#include <stdio.h>
#include <stdlib.h>
void sort_array(int *arr, int size);
int main() 
{
    int *arr, i, size = 5;
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) 
	{
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sort_array(arr, size);

    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    free(arr);

    return 0;
}
void sort_array(int *arr, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}













       