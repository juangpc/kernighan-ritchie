#include <stdio.h>

#define MAXLINE 1002

#ifdef MAXLINE
  #if MAXLINE < 3
    #error "Error: MAXLINE should be at least 2"
  #endif
#endif

int get_line(char line[], int maxlength);
void remove_trail_blanks(char s[], int l);
void print_line(char s[]);

int main(void)
{
  int l;
  char line[MAXLINE];
  while ((l = get_line(line, MAXLINE)) > 0)
    {
      if(l>2){
        remove_trail_blanks(line,l);
        print_line(line);
      }
    }
}

int get_line(char s[], int maxlength)
{
  char c;
  int i = 0;
  do
  {
    c = getchar();
    s[i++] = c;
  } while (c != '\n' && c != '.' && i < maxlength - 2);
  s[i] = '\0';
  return i;
}

void remove_trail_blanks(char s[], int l)
{
  int i;
  if (l > 1) //l=0 is not allowed
  {          //l=1 is empty line and therefore no trail to remove
    i = l - 2;
    while (i > 0 && (s[i] == '\t' || s[i] == ' '))
      i--;
    if (i != (l - 2))
    {
      s[i] = s[l - 1];
      s[i + 1] = s[l];
    }
  }
}

void print_line(char s[])
{
  int i = 0;
  while (putchar(s[i]) != '\0')
    i++;
}