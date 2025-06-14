#include<stdio.h>
void main()
{
   int num1 = 10;
   int num2 = 5;
   char op = '*';
   int result;
   
   if(op == '+')
   {
   	result = num1 + num2;
   	printf("result: %d + %d = %d\n", num1, num2, result);
   }
   else if(op == '-')
   {
   	result = num1 - num2;
   	printf("result: %d - %d = %d\n", num1, num2, result);
   }
   else if(op == '*')
   {
   	result = num1 * num2;
   	printf("result: %d * %d = %d\n", num1, num2, result);
   }
   else if(op == '/')
   {
   	result = num1 / num2;
   	printf("result: %d / %d = %d\n", num1, num2, result);
   }
   else if(op == '%')
   {
   	result = num1 % num2;
   	printf("result: %d % %d = %d\n", num1, num2, result);
   }

}