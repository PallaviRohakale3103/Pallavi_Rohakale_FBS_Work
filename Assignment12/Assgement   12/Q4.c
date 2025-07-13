#include <stdio.h>
#include <stdlib.h>

void even(int *arr, int n);
void odd(int *arr, int n);

int main() {
    int n, *arr;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    even(arr, n);

    printf("\nOdd numbers: ");
    odd(arr, n);

    free(arr);
    return 0;
}

void even(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

void odd(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}