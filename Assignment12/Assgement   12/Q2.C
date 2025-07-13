#include <stdio.h>
#include <stdlib.h>
int search(int *arr, int n, int num);
int main() {
    int n, *arr, num;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &num);

    int found = search(arr, n, num);
    if (found)
        printf("Found\n");
    else
        printf("Not found\n");

    free(arr);
    return 0;
}

int search(int *arr, int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            return 1;
    }
    return 0;
}