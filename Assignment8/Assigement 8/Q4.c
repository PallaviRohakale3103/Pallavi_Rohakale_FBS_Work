#include <stdio.h>
void print_even(int arr[], int n);
void print_odd(int arr[], int n);
int main()
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    print_even(arr, 5);

    printf("\nOdd numbers: ");
    print_odd(arr, 5);

    return 0;
}

void print_even(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

void print_odd(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}