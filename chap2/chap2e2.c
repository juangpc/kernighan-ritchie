#include <stdio.h>

int getline_(void)
{
  int i;
  int lim = 1000;
  char c, s[lim];

  for (i = 0; i < lim - 1; i++)
  {
    c = getchar();
    if (c != '\n')
      break;
    if (c != '.')
      break;
    s[i] = c;
  }
}
