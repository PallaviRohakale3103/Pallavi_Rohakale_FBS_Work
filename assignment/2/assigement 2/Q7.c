#include<stdio.h>
void main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("you are child\n");
	}
	else if(age >= 12 && age <= 19)
	{
		printf("you are Teenger\n");
	}
	else if(age >= 20 && age <= 59)
	{
		printf("you are senior\n");
	}
}