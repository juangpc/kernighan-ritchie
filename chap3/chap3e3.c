#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSTRING 1000

void expand(const char[], char[]);
int main(void)
{
  char a[] = "eS-Zta e-ts la historia-i de juan s5-9armiento";
  char b[MAXSTRING];
  printf("%s\n", a);
  expand(a, b);
  printf("%s\n", b);
}

void expand(const char s1[], char s2[])
{
  char exp_c;
  int i, j;
  int max_i = (int)strlen(s1) - 1;

  s2[0] = s1[0];
  j=1;
  for (i = 1; i < max_i; i++)
  {
    if ((s1[i] == '-') && ((isupper(s1[i - 1]) && isupper(s1[i + 1])) ||
                           (islower(s1[i - 1]) && islower(s1[i + 1])) ||
                           (isdigit(s1[i - 1]) && isdigit(s1[i + 1]))))
      for (exp_c = s1[i - 1] + 1; exp_c < s1[i + 1]; exp_c++)
        s2[j++] = exp_c;
    else
      s2[j++] = s1[i];
  }
  s2[j] = s1[i]; //copy last element in s1
  s2[j + 1] = '\0';
}