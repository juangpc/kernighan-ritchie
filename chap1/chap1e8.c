#include <stdio.h>

int main(void) {
  int c,nb, nt, nl;

  nb=0;
  nt=0;
  nl=0;

  while((c=getchar()) != 10) {
    if(c=='\n')
      nl++;
    if(c=='\t')
      nt++;
    if(c==' ')
      nb++;
  }

  printf("nb: %d\t nt: %d\t nl: %d\n",nb,nt,nl);

}
