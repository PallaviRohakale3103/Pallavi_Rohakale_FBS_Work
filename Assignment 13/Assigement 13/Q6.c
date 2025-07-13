#include<stdio.h>
struct date{
	int date;
	int month;
	int year;
};
void main()
{
	struct date d;
	printf("enter the date");
	scanf("%d",&d.date);
	
	printf("enter the month");
	scanf("%d",&d.month);
	
	printf("enter the year");
	scanf("%d",&d.year);
	
	
	printf("date=%d\n",d.date);
    printf("month=%d\n",d.month);
    printf("year=%d\n",d.year);
	
	
	
}

