#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi_(char s[]);
int power_int(int base, int exp);

// function to
int main(void)
{
  char number[]="0xa85be";
  printf("the stirng %s in hex is: %i\n",number,atoi_(number));
}

int atoi_(char s[])
{
  int l, i, n, x;

  if ((l = (int)strlen(s)) < 2)
  {
    printf("Error. Not enough hex digits\n");
    return 0;
  }
  else
  {
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
      x = 0;
      n = 0;
      for (i = 0; i < l - 2; i++)
      {
        switch (tolower(s[l-1-i]))
        {
        case 'a':
          x = 10;
          break;
        case 'b':
          x = 11;
          break;
        case 'c':
          x = 12;
          break;
        case 'd':
          x = 13;
          break;
        case 'e':
          x = 14;
          break;
        case 'f':
          x = 15;
          break;
        default:
          if (s[l-1-i] >= '0' && s[l-1-i] <= '9')
          {
            x = s[l-1-i] - '0';
            break;
          }
          else
            printf("Error. Wrong codification of hexadecimal numbers.\n");
        }
        n = n + x * power_int(16, i);
      }
      return n;
    }
    else
    {
      printf("Not the correct format for an hexadecimal number. HEX numbers should start with the string '0x' or '0X'\n");
      return 0;
    }
  }
}

int power_int(int base, int exp_)
{
  int i, x;
  if (exp_ == 0)
    return 1;
  else
  {
    x = base;
    for (i = 0; i < exp_ - 1; i++)
      x *= base;
    return x;
  }
}
