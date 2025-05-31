void main() 
{
    int a, b, temp;
    
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    printf("\nBefore swapping:\na = %d\nb = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping:\na = %d\nb = %d\n", a, b);
    
}
