#include <stdio.h>

/* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ... 300 */
	
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -20;
	upper = 150;
	step = 20;
	
	printf("Fahrenheit\tCelsius\n");
	printf("--------------------\n");
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
}
