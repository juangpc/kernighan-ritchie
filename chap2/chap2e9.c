#include <stdio.h>

// exercise chap2e9
// the reason why x &= (x-1) is faster is because it iterates once per 
// binary 1, instead of iterating through the whole word.
// x &= (x-1) turns zero the least significant '1' each time.

int bitcount(unsigned);

int main(void)
{
  unsigned x = 1080;
  printf("the number of 1s in %u is %i\n",x,bitcount(x));
}

int bitcount(unsigned x)
{
  int b;
  for (b = 0; x; x &= (x - 1))
    b++;
  return b;
}