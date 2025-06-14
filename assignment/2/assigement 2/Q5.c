#include<stdio.h>
void main()
{
	float price = 550;
	char isstudent = 'y';
	float discount = 0.0;
	float finalprice;
	
	if(isstudent == 'y')
	if(price > 500) 
	{
		discount = 0.20;
	}
	else
	{
		discount =0.10;
	}
	else
	{
		if(price > 600)
		{
			discount = 0.15;
		}
	else
	{
		discount = 0.0;
	}
	
	}
	finalprice = price - (price * discount);
	printf("orignal price: %.2lf\n", price);
	printf("discount applied: %.0f%%\n", discount * 100);
	printf("final price: %.2lf\n", finalprice);
	
}