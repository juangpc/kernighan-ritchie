#include <stdio.h>

unsigned invert(unsigned, int, int);

int main(void)
{
  printf("%u", invert((unsigned)8, 3, 1));
}

unsigned invert(unsigned x, int p, int n)
{
  // return (x&(~(~0<<1))|(~(~0<<p)))|(~(~0&(x>>(p-n+1)))<<(p-n+1));
  return x ^ (~(~0<<n)<<(p+1-n));
}
