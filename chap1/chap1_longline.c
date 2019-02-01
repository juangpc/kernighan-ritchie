#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[], int maxline);
void copy_(char to[], char from[]);

// print the longest line
int main(void) {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getline_(line,MAXLINE)) > 0)
    if(len > max) {
      max = len; 
      copy_(longest,line);
    }
  
  if(max>0) //there was a line
    printf("%s",longest);
  
  printf("\n");

  return 0;
}


// getline_: read a line into s, return lenght
int getline_(char s[], int lim) {
  int c,i;

  for(i = 0;i < lim-1 && (c = getchar()) != '.' && c != '\n';i++) 
    s[i] = c;
  
  if(c == '\n') {
    s[i] = c; 
    i++;
  }
  return i;
}

//copy_: copy_ from into to; assume to is big enough
void copy_(char to[],char from[]) {
  int i;
  i=0;
  while((to[i] = from[i]) != '\0')
    i++;
}