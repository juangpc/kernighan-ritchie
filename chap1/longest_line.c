#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE]; //to define an array in the stack we need to
                      //define a storage size.
  char longest[MAXLINE];
  max = 0;
  while ((len = getline_(line, MAXLINE)) > 0)
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  if (max > 0)
    printf("%s", longest); //%s = string
  return 0;
}

int getline_(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != '.' && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\n'; //this is ugly
  return i;
}

void copy(char to[], char from[])
{
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
