#include <stdio.h>

int main(void) {
  float fahr, celsius;

  printf("Fahr - Celsius\n");
  printf("--------------\n");

  for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%6.2f\t%6.2f\n",fahr,celsius);
  }

}