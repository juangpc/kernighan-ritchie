-#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  //print header
  printf(" Fahr  - Celsius\n");
  printf("-----------------\n");

  fahr= lower;
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%06.2f\t%06.2f\n",fahr,celsius);
    fahr= fahr+step;
  }
}