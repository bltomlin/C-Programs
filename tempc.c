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
	while ( fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		print("%-20s%20s", fahre, cels);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
