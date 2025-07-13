#include <stdio.h>
int is_prime(int n);
int main()
 {
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers: ");
    for(i = 0; i < 5; i++) {
        if(is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
int is_prime(int n) {
    int count = 0;
    if(n < 2) return 0;

    for(int j = 1; j <= n; j++) {
        if(n % j == 0)
            count++;
    }

    return (count == 2);
}