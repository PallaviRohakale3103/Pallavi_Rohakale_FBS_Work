#include <stdio.h>
int calculate_sum(int arr[], int n);
int main() 
{
    int arr[5], sum, i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sum = calculate_sum(arr, 5);

    printf("Sum = %d\n", sum);

    return 0;
}
int calculate_sum(int arr[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}