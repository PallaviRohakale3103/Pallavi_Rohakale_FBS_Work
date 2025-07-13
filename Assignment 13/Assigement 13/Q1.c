#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	int marks;
};
void main()
{
	struct student s1,s2,s3,s4,s5;
	printf("enter the student  1 detalils\n:");
	printf("enter a roll no");
	scanf("%d",&s1.rollno);
	printf("enter a name");
	scanf("%s",&s1.name);
	printf("enter a marks");
	scanf("%d",&s1.marks);
	
	printf("enter the student  2 detalils\n");
  	printf("enter a roll no");
	scanf("%d",&s2.rollno);
	printf("enter a name");
	scanf("%s",s2.name);
	printf("enter a marks");
	scanf("%d",&s2.marks);
	
	printf("enter the student  3 detalils\n");
	printf("enter a roll no");
	scanf("%d",&s3.rollno);
	printf("enter a name");
	scanf("%s",s3.name);
	printf("enter a marks");
	scanf("%d",&s3.marks);
	
	printf("enter the student  4 detalils\n");
	printf("enter a roll no");
	scanf("%d",&s4.rollno);
	printf("enter a name");
	scanf("%s",s4.name);
	printf("enter a marks");
	scanf("%d",&s4.marks);
	
	printf("enter the student  5 detalils\n");
	printf("enter a roll no");
	scanf("%d",&s5.rollno);
	printf("enter a name");
	scanf("%s",s5.name);
	printf("enter a marks");
	scanf("%d",&s5.marks);
	
	printf("studemnt details\n");
	
	printf("\nrollno=%d name=%s marks=%d",s1.rollno,s1.name,s1.marks);
	printf("\nrollno=%d name=%s marks=%d",s2.rollno,s2.name,s2.marks);
	printf("\nrollno=%d name=%s marks=%d",s3.rollno,s3.name,s3.marks);
	printf("\nroll no=%d name=%s marks=%d",s4.rollno,s4.name,s4.marks);
	printf("\nroll no=%d name=%s marks=%d",s5.rollno,s5.name,s5.marks);
	
}
