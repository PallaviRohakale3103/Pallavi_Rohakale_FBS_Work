#include<stdio.h>
void main()
{
	int side1 = 5;
	int side2 = 4;
	int side3 = 7;
	
	if(side1 == side2 && side2 == side3)
	{
		printf("tringle is equilitral.\n");
	}
	else if(side1 == side2 || side1 == side3 || side2 == side3)
	{
		printf("tringle is Isosceles./n");
	}
	else
	{
		printf("tringle is scalean./n");
	}
}
