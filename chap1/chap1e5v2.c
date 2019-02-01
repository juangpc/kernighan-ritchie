#include <stdio.h>

int main(void) {
  float fahr,celsius;
  
  printf("Celsius - Fahr\n");
  printf("--------------\n");

  for(celsius=-20;celsius <= 150; celsius = celsius + 20) {
    fahr=(9.0/5.0)*celsius+32;
    printf("%6.2f\t%6.2f\n",celsius,fahr);
  }

}