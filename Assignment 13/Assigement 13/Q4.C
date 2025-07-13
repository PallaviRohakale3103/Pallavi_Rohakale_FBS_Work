#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	float salary;
	float commission;
};
int main()
{
  struct HR hr1;
  printf("enter HR ID:");
  scanf("%d",&hr1.id);
  
  printf("enter the name:");
  scanf("%s",&hr1.name);
  
  printf("enter the salary:");
  scanf("%f",&hr1.salary);
  
  printf("enter the comission:");
  scanf("%f",&hr1.commission);
  
  printf("\n HR detail");
  printf("ID=%d\n",hr1.id);
  printf("name=%s\n",hr1.name);
  printf("salary=%f\n",hr1.salary);
  printf("commision=%f\n",hr1.commission);
  
  return 0;
}