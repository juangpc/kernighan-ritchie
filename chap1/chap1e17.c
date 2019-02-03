#include <stdio.h>

#define MAXLINE 1000 //max number of chars per line
#define THRESHOLD 80 //minimum line length to keep

int get_line(char line[]);

int main(void)
{
  int line_length = 0;
  char line[MAXLINE];

  while ((line_length = get_line(line)) >= 1)
    if (line_length >= THRESHOLD)
      printf("%s\n", line);

  return 0;
}

int get_line(char l[])
{
  char c;
  int i = 0;

  while (i < MAXLINE - 1)
  {
    while ((c = getchar()) != '\n' && c != '.')
      l[i++] = c;
  }
  l[i] = '\n';

  return i;
}
