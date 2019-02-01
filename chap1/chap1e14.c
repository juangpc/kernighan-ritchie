#include <stdio.h>

#define NCHARS 26
int main(void) {
  int c, i, j;
  int chist[NCHARS];

  for(i = 0; i < NCHARS; i++)
    chist[i]=0;
  
while((c = getchar()) != '.') {
  if(c >= 'A' && c <= 'Z')
    c = c + 32;
  else if (c >= 'a' && c <= 'z')
    chist[c-'a']++;
}

printf("histogram\n");
printf("-----------\n");

for(i =0; i<NCHARS; i++) {
  printf("%c:[%d]",i+'a',chist[i]);
  for(j = 0; j < chist[i]; j++)
    printf("+");
  printf("\n");
}
printf("\n");

}