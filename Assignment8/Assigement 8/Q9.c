#include <stdio.h>
void print_reverse(int a[], int n);
int main()
{
    int a[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array: ");
    print_reverse(a, 5);

    return 0;
}
void print_reverse(int a[], int n)
{
    for(int i = n-1; i >= 0; i--) 
	{
        printf("%d ", a[i]);
    }
}