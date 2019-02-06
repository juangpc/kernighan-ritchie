#include <stdio.h>

#define MAX_DIGITS 100

void itob(int n, char s[], int b);
int format_digit(int);

int main(void)
{
  int x = 5816;
  char ss[MAX_DIGITS];
  itob(x,ss,10);
  printf("%i: %s\n",10,ss);
  itob(x,ss,8);
  printf("%i: %s\n",8,ss);
  itob(x,ss,16);
  printf("%i: %s\n",16,ss);
}

void itob(int n, char s[], int b)
{
  int f[MAX_DIGITS];
  int digit, n_digits;
  int i = 1;

  f[0] = n;
  while (n > b)
  {
    n /= b;
    f[i++] = n;
  }
  n_digits = i;

  digit = f[n_digits-1];
  s[0]=format_digit(digit);
  for(i=1;i<n_digits;i++)
  {
    digit = f[n_digits-1-i];
    if(digit < b)
      s[i]=format_digit(digit);
    else
      s[i]=format_digit(digit-f[n_digits-i]*b);
  }
  s[i]='\0';
}

int format_digit(int i)
{
  if (i < 10)
    return i + '0';
  else
    return i + 'A' - 10;
}