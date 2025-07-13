#include<stdio.h>
struct Product
{
    int id;
    char name[50];
    int quantity;
    double price;
};

int main()
{
    struct Product p;

    printf("Enter product ID: ");
    scanf("%d", &p.id);

    printf("Enter product name (no spaces): ");
    scanf("%s", p.name);

    printf("Enter quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter price: ");
    scanf("%lf", &p.price);

    printf("\nProduct Details:\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2lf\n", p.price);

    return 0;
}
