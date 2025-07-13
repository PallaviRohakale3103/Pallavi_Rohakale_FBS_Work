#include <stdio.h>
void merge_arrays(int arr[], int brr[], int c[], int n);
int main()
{
    int arr[5] = {44, 12, 66, 2, 5};
    int brr[5] = {10, 7, 88, 3, 15};
    int c[10];
    int i;

    merge_arrays(arr, brr, c, 5);

    printf("Merged array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}

void merge_arrays(int arr[], int brr[], int c[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        c[i] = arr[i];
    }
    for(j = 0; j < n; j++) {
        c[i++] = brr[j];
    }
}