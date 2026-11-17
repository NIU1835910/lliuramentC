#include <stdio.h>

int main(void) {
	int temperatura = 25;
	if (temperatura >= 20) {
		printf("High ");
	}
	else {
		printf("Low ");
	}
	printf("Temperature: %d degrees\n", temperatura);
	printf("Fahrenheit: %.1f degrees\n", fah);
	return 0;
}
