void main() 
{
    int num1, num2, num3, num4, num5;
    float average;

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);


    average = (num1 + num2 + num3 + num4 + num5) / 5.0;


    printf("The average is: %.2f\n", average);

    
}
