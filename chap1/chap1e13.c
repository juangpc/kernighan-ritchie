#include <stdio.h>

#define MAXWL 15
#define IN 1
#define OUT 0

// program to build histobram with wordlengths in a text
int main(void) {
  int c, state, nw, wl, i, j;
  int wlhist[MAXWL];

  //initalization
  state = OUT;
  nw = 0;
  wl = 0;
  for(i = 0; i < MAXWL; i++)
    wlhist[i] = 0;

  while((c = getchar()) != '.') {
    if(c == ' ' || c == '\n' || c == '\t') {
     if(state == IN) {
        if (wl < MAXWL)
          wlhist[wl-1]++;
        else
          wlhist[MAXWL-1]++;
        wl = 0;
        state = OUT;
      }
    } else {
      if ( state == OUT) {
        state = IN;
        nw++;
        wl = 1;
      } else
        wl++;
    }
  }

  printf("histogram\n");
  printf("----------\n");
  printf("number of words: %d\n",nw);
  printf("---------------------\n");
  for(i = 0; i < MAXWL; i++) {
    printf("%3d:[%d]",i+1,wlhist[i]);
    for(j = 0; j < wlhist[i]; j++)
      printf("+");
    printf("\n");
  }



}