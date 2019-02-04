#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int maxline);
void reverse_line(char in[], int l, char out[]);
void print_line(char s[]);

int main(void)
{
  int len;
  char line[MAXLINE];
  char revline[MAXLINE];

  // printf("\nReversed lines:\n\n");
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    reverse_line(line, len, revline);
    print_line(revline);
  }

  return 0;
}

int get_line(char s[], int maxline)
{
  int i = 0;
  char c;
  while (i < maxline && (c = getchar()) != '\n')
    s[i++] = c;

  s[i] = '\n';
  s[i+1]='\0';

  return i - 1;
}

void reverse_line(char s[],int l,char r[])
{
  int i = 0;
  while(l>=0)
    r[i++] = s[l--];
  r[i]=s[i];
  r[i+1]='\0';
}

void print_line(char s[])
{
  printf("\n");
  for(int i=0;putchar(s[i])!='\0';i++)
    ;
}
