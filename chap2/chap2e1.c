
#include <stdio.h>
#include <limits.h>
#include <float.h>

unsigned char uc = 0;
signed int i = 0;
unsigned int ui = 0;
signed long int sli = 0;
unsigned long int uli = 0;

float f = 0;
double d = 0;
long double ld = 0;


int main(void)
{
  printf("The maximum value for an unsigned char is: %i\n",UCHAR_MAX);
  printf("\n");

  printf("The minimum value for a signed char is: %i\n",SCHAR_MIN);
  printf("The maximum value for a signed char is: %i\n",SCHAR_MAX);
  printf("\n");

  printf("The minimum value for a char is: %i\n",CHAR_MIN);
  printf("The maximum value for a char is: %i\n",CHAR_MAX);
  printf("\n");
  
  printf("The maximum value for an unsigned int is: %u\n",UINT_MAX);
  printf("The maximum value for an unsigned long int is: %lu\n",ULONG_MAX);
  
  printf("The minimum value for a short int is: %i\n",SHRT_MIN);
  printf("The maximum value for a short int is: %i\n",SHRT_MAX);
  printf("The maximum value for an unsigned short int is: %i\n",USHRT_MAX);
  printf("\n");

  printf("The minimum value for an int is: %i\n",INT_MIN);
  printf("The maximum value for an int is: %i\n",INT_MAX);
  printf("The maximum value for an unsigned int is: %u\n",UINT_MAX);
  printf("\n");

  printf("The minimum value for a long int is: %lu\n",LONG_MIN);
  printf("The maximum value for a long int is: %lu\n",LONG_MAX);
  printf("The maximum value for an unsigned long int is: %lu\n",ULONG_MAX);
  printf("\n");

  printf("  floating point \n");
  printf(" -----------------\n");

  printf("The minimum value for a single-precision floating-point is: %f\n",FLT_MIN);
  printf("The maximum value for a single-precision floating-point is: %f\n",FLT_MAX);
  printf("The minimum value for a double-precision floating-point is: %f\n",DBL_MIN);
  printf("The maximum value for a double-precision floating-point is: %f\n",DBL_MAX);
  printf("The minimum value for a long double-precision floating-point is: %LF\n",LDBL_MIN);
  printf("The maximum value for a long double-precision floating-point is: %LF\n",LDBL_MAX);
  printf("\n");

  printf("\a");

}
