#include <stdio.h>

unsigned rightrot(unsigned, int);
int wordlength(void);

int main(void)
{
  unsigned x = 26;
  int r = 3;
  printf("wordlength: %d\n", wordlength());
  printf("rotated word for: %u, rotated %i times, is: %u\n",x,r,rightrot(x,r));
}

unsigned rightrot(unsigned x, int n)
{
  return ((~(~0 << n) & x) << (wordlength() - n)) | x >> n;
}

int wordlength(void)
{
  int i = 0;
  unsigned x = ~0;
  while ((x <<= 1))
    i++;
  return i+1;
}