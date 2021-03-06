#include <ctype.h>
#include <math.h>

double atof_(char s[])
{
  double val, power, exponent;
  int i, sign, exp_sign;

  for (i = 0; isspace(s[i]); i++)
    ; //skip initial white spaces.

  sign = (s[i] == '-') ? -1 : 1;

  if (s[i] == '+' || s[i] == '-')
    i++;

  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');

  if (s[i] == '.')
    i++;

  for (power = 1.0; isdigit(s[i]); i++)
  {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }

  if (s[i] == 'E' || s[i] == 'e')
    i++;

  exp_sign = (s[i] == '-') ? -1 : 1;

  if (s[i] == '+' || s[i] == '-')
    i++;
  
  for(exponent = 0.0; isdigit(s[i]);i++)
    exponent = 10.0 * exponent + (s[i] - '0');

  return (sign * val / power) * pow(10.0,exponent);
}
