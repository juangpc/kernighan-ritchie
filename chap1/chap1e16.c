#include <stdio.h>

int getline_(void);

int main(void)
{
  int line_length, max_line;

  max_line = 0;

  while ((line_length = getline_()) >= 1)
  {
    if (line_length > max_line)
      max_line = line_length;
  }

  if (max_line > 0)
    printf("%d\n", max_line);
}

int getline_(void)
{
  int c, l;
  l = 0;
  while ((c = getchar()) != '\n' && c != '.')
    l++;

  return l;
}