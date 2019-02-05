#include <stdio.h>

unsigned getbits(unsigned, int, int);
unsigned setbits(unsigned, int, int, unsigned);

int main(void)
{
  printf("%u", setbits((unsigned)255, 3, 4, (unsigned)0));
}

unsigned int getbits(unsigned int x, int p, int n)
{
  return (x >> (p - n + 1) & ~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  return (x & (~0 << n)) | (y >> (p - n + 1) & ~(~0 << n));
}