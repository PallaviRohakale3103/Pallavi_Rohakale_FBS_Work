#include<stdio.h>>
void main()
{
  int n = 121;
  int rev = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
  
  if(n == rev)
  printf("%d is palindrom\n",n);
  else
  {
  	printf("%d iss not palindrom\n",n);
  }
}