#include <stdio.h>

int main(int argn, char *arglist[])
{
  int i = 0;
  for (i = 0; i<argn;i++)
    printf("%s%s",arglist[i],(i<argn-1)? "_o_":"");
    printf("\n");
  return 0;
}