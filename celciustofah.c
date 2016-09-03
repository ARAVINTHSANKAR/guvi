#include <stdio.h>

int main() 
{
	float celsius;
	float fahrenheit;
	printf("enter temp in celsius");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("\n temp in fahrenheit is%f",fahrenheit);
	return 0;
}
