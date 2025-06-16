//print amstrong number given n range 1 to n
#include <stdio.h>
int main()
 {
    int n,i=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    while (i<=n) {
        int num=i,temp=num,sum=0,count=0;

        while (temp>0) {
            count++;
            temp=temp/10;
        }

    
        temp=num;
        while (temp>0) {
            int rem=temp%10;
            int power=1, j=1;

            while(j<=count) {
                power *= rem;
                j++;
            }
            sum+=power;
            temp/=10;
        }

        if(sum==num) {
            printf("%d ", num);
        }
        i++;
    }
    return 0;
}

