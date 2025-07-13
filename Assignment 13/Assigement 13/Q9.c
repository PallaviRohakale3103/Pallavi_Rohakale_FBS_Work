#include <stdio.h>
struct Complex 
{
    double real;
    double imaginary;
};

int main()
{
    struct Complex c;

    printf("Enter the real part: ");
    scanf("%lf", &c.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);

    printf("Complex number: %.2lf + %.2lfi\n", c.real, c.imaginary);

    return 0;
}
