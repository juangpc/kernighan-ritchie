
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr2celsius(float);

int main(void) 
{
  float fahr, celsius;
  int lower, upper, step;

  printf(" Fahr - Celsius\n");
  printf("----------------\n");

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3.0f %6.1f\n",fahr,fahr2celsius(fahr));
  
}

float fahr2celsius(float fahr)
{
  return (5.0/9.0) * (fahr-32.0);
}

