#include <stdio.h>
void sort_array(int arr[], int n);
int main() 
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
	 {
        scanf("%d", &arr[i]);
    }

    sort_array(arr, 5);

    printf("Sorted array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort_array(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
	 {
        for(j = i + 1; j < n; j++)
		 {
            if(arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}