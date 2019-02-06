#include <stdio.h>
#include <string.h>

#define MAXSTRING 1000

void itoa2(int, char[]);
void itoa3(int, char[], int);
void reverse(char[]);

int main(void)
{
  int a = -59;
  int l = 7; //minimum field width. padding blanks on the left
  char s[MAXSTRING];

  itoa3(a, s, l);
  printf("the number: %i turns out to be: %s\n", a, s);
  return 0;
}

void itoa2(int n, char s[])
{
  int i, sign;
  if ((sign = n) > 0)
    n = -n; //turn negative
  i = 0;
  do
  {
    //printf("n : %i - n%%10 = %i\n",n,n%10);
    s[i++] = -(n % 10) + '0';
  } while ((n /= 10) != 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void itoa3(int n, char s[], int l)
{
  int i, k, sign;

  if ((sign = n) > 0)
    n = -n; //working with negative
  i = 0;
  do
  {
    s[i++] = -(n % 10) + '0';
  } while ((n /= 10) != 0);

  if (sign < 0)
    s[i++] = '-';

  l -= i + ((sign < 0)? 1 : 0);
  for (k = 0; k < l; k++)
    s[i++] = ' ';

  s[i] = '\0';

  reverse(s);
}

void reverse(char s[])
{
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    j--;
  }
}