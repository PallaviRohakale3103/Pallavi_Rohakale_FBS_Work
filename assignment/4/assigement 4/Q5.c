#include<stdio.h>
void main()
{
	for(int i=1;i<=6;i++)
	{
	
	int choice;
	printf("Enter your choice from 1 to 6:\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		int no1;
		printf("Enter the  to check evn or odd:\n");
		scanf("%d",&no1);
		
		no1%2==0?printf("Even number\n"):printf("odd number\n");
	}
	else if(choice==2)
	{
		int no2,isprime=0;
		printf("Enter the number to check prime or not:\n");
		scanf("%d",&no2);
		for(int i=2;i<=no2/2;i++)
		{
			if(no2%i==0)
			{
				isprime=1;
			}
		}
		isprime==0?printf("Num is prime\n"):printf("not prime\n");
	}
		
	else if(choice==3)
	{
		int no3,temp,rev=0,rem;
		printf("Enter the number to check palindrome or not:\n");
		scanf("%d",&no3);
		temp=no3;
		while(no3!=0)
		{
			rem=no3%10;
			rev=rev*10+rem;
			no3=no3/10;
		}
		printf("%d",rev);
		rev==temp?printf("Number is palindrome\n"):printf("Not palindrome\n");
	}
		
	else if(choice==4)
	{
		int no4;
		printf("Enter the number to check positive,negative or zero:\n");
		scanf("%d",&no4);
		no4==0?printf("Number is zero\n"):no4>0?printf("Number is positive\n"):printf("Number is negative\n");
	}
		
	else if(choice==5)
	{
		int no5,rev=0,rem;
		printf("Enter the number to print reverse:\n");
		scanf("%d",&no5);
		
		while(no5!=0)
		{
			rem=no5%10;
			rev=rev*10+rem;
			no5=no5/10;
		}
		printf("%d",rev);
	}
		
	else if(choice==6)
	{
		int no6,sum=0,rem;
		printf("Enter the number to print sum of digits\n");
		scanf("%d",&no6);
		
		while(no6!=0)
		{
			rem=no6%10;
			sum=sum+rem;
			no6=no6/10;
		}
			printf("%d",sum);
	}
	
	else
	{
		printf("\nInvalid input");
	}
	}
}
			
