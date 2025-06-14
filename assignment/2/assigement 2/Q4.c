#include<stdio.h>
void main()
{
	int marks = 75;
	if(marks > 75)
	{
		printf("Distinaction\n");
	}
	else if(marks > 65)
	{
	    printf("First class\n");	
	}
	else if(marks > 55)
	{
		 printf("second class\n");	
	}
	else if(marks >= 40)
	{
	    printf("pass class\n");  	
	} 
	else 
	{	
	printf("fail\n");
	}
}