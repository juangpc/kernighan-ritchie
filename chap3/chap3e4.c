#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAXSTRING 1000

void itoa(int, char[]);
void itoa2(int,char[]);
void reverse(char[]);

int main(void)
{
  // int a=-59;
  int a=INT_MIN;
  char s[MAXSTRING];
  itoa(a,s);
  printf("the number: %i turns out to be: %s\n",a,s);
  itoa2(a,s);
  printf("the number: %i turns out to be: %s\n",a,s);
  return 0;
}

/*
  The problem with itoa is that in two's complement representation
  the biggest negative number DOES NOT have a positive representation.
  A solution is to work with negative numbers all together. That way
  There should be no problem, since the biggest negative number is greater 
  than the biggest positive number (by one).s

*/
void itoa(int n, char s[])
{
  int i, sign;
  if ((sign = n) < 0)
    n = -n;
  i = 0;
  do
  {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void itoa2(int n,char s[])
{
  int i, sign;
  if ((sign = n) > 0)
    n=-n; //turn negative
  i=0;
  do{
    //printf("n : %i - n%%10 = %i\n",n,n%10);
    s[i++] = -(n%10) + '0';
  }while((n/=10)!=0);
  if(sign<0)
    s[i++]='-';
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