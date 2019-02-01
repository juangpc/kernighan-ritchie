#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 140;
  step = 20;

  //print header
  printf(" Celsius - Fahr\n");
  printf("-----------------\n");
  
  celsius = lower;
  while(celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%06.2f\t%06.2f\n",celsius,fahr);
    celsius = celsius + step;
  }


}