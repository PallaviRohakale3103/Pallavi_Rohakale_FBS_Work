#include<stdio.h>
struct saleManager
{
	
	int id;
	char name[50];
	float salary;
	float injective;
	int target;
	
};
int main()
{
	struct saleManager sm;
	 printf("enter the id:");
	 scanf("%d",&sm.id);
	 
	 printf("enter the name:");
	 scanf("%s",&sm.name);
	 
	printf("enter the salary:");
	 scanf("%f",&sm.salary);
	 
	 printf("enter the injective:");
	 scanf("%f",&sm.injective);
	 
	  printf("enter the target:");
	 scanf("%d",&sm.target);
	 
	 
	 printf("\nsales manager details");
	 printf("ID=%d\n",sm.id);
     printf("name=%s\n",sm.name);
     printf("salary=%f\n",sm.salary);
     printf("injective=%f\n",sm.injective);
     printf("target=%d\n",sm.target);
     return 0;
     
	 
}