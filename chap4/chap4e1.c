#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline_(char[], int);
int strindex(char[], char[]);
int strrindex(char[], char[]);

char pattern[] = "ould";

int main(void)
{
  char line[MAXLINE];
  int found = 0;
  while (getline_(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0)
    {
      printf("%s\n", line);
      found++;
    }
  return found;
}

int getline_(char s[], int lim)
{
  int c, i;
  i = 0;
  while (--lim > 0 && (c = getchar()) != '.' && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

int strindex(char s[], char t[])
{
  int i, j, k;
  for (i = 0; s[i] != '\0'; i++)
  {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0')
      return i;
  }
  return -1;
}

int strrindex(char s[], char t[])
{
  int i, j, k;
  int s_length = strlen(s);
  int t_length = strlen(t);

  for (i = s_length - t_length; i > 0; i--)
  {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0')
      return i;
  }
  return -1;
}