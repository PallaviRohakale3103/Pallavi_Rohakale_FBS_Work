#include<stdio.h>
void main()
{
	int a = 22;
	int b = 36;
	int c = 15;
	int grater;
	
	if (a > b) 	{
		if (a > c) {
			grater = a;
		} else {
		    grater = c;
		}
	} else {
		if (b > c) 	{
			grater = b;
		} else {
		    grater = c;	
			
		}
	}
	printf("grater number : %d\n", grater);
}
