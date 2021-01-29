#include <stdio.h>

main()
{
	float fahr, celsius;
	float lower, upper, step;
    char fahre[] = "Fahrenheit";
    char cels[] = "Celsius";

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
    printf("%-20s%20s\n", fahre, cels);
	while ( fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%5.0f %32.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
