#include <stdio.h>
void print_alternate(int arr[], int n);
int main() 
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements:\n");
    print_alternate(arr, 5);

    return 0;
}

void print_alternate(int arr[], int n) {
    for(int i = 0; i < n; i += 2) {
        printf("%d\n", arr[i]);
    }
}