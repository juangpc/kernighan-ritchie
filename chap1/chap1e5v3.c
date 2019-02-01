#include <stdio.h>

#define LOWER -20
#define LIMIT 150
#define STEP 20

int main(void){
  float fahr, celsius;

  printf("Celsius - Fahr\n");
  printf("--------------\n");

  for(celsius=LOWER;celsius<=LIMIT;celsius=celsius+STEP) {
    fahr=(9.0/5.0)*celsius+32;
    printf("%6.2f\t%6.2f\n",celsius,fahr);
  }
}

