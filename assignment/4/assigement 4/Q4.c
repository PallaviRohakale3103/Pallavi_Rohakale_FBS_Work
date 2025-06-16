//print a strong number given  raqnge 1 to n 
#include<stdio.h>
void main()
{
	int n;
	printf("enter a value of n:");
	scanf("%d",&n);
	
	printf("strong number from 1 toare:%d\n",&n);
	
	for(int i=1;i<=n;i++){
		int num=i;
		int sum=0;
		while(num>0){
			int digit=num%10;
			int fact =1;
			
			for(int j=1;j<=digit;j++){
				fact*=j;
			}
			sum+=fact;
			num/=10;
			}
			if(sum==i)
			printf("%d",i);
		}
	}
