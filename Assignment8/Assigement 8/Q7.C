#include <stdio.h>
void sum_arrays(int arr[], int brr[], int crr[], int n);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5], i;

    sum_arrays(arr, brr, crr, 5);

    printf("Sum of arrays (crr): ");
    for(i = 0; i < 5; i++) {
        printf("%d ", crr[i]);
    }

    return 0;
}

void sum_arrays(int arr[], int brr[], int crr[], int n) {
    for(int i = 0; i < n; i++) {
        crr[i] = arr[i] + brr[i];
    }
}