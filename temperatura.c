#include <stdio.h>

int main(void) {
  int temperatura = 25;
  printf("Temperature: %d degrees\n", temperatura);
  float fah = (temperatura*9)/5+32;
  printf("Fahrenheit: %.1f degrees\n", fah);
  return 0;
}
