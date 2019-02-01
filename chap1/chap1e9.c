#include <stdio.h>

int main(void) {
  
  int c, prev_blank;
  prev_blank = 0;

  while( (c = getchar()) != EOF) {
    if( c == ' '){
      if( prev_blank == 0)
        putchar(c);
        prev_blank = 1;   
    } else {
      putchar(c);
      prev_blank = 0;
    }
  }

  return 0;
}
