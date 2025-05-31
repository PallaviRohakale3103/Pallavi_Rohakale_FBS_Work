void main()
{
	float celsius, fahrenheit;
	
	printf("Enter temprature in celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}
