#include <stdio.h>


int main(void)
{
  int i=0;
  int x[1000];
  for (int j=-100;j<101;j++)
    x[i++]=j;

  for(int ii=0;ii<200;ii++)
    printf("(%i)%%10=%i\n",x[ii],x[ii]%10);
}