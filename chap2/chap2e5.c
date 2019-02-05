#include <stdio.h>

#define TRUE 1
#define FALSE 0

int any(const char[],const char[]);


int main(void)
{
  char s1[] = "Esta es una prueba muy interesante.";
  char s2[] = "ani";
  printf("Testing string: %s\n", s1);
  printf("Match expression: %s\n",s2);
  printf("First match occurs on: %i\n", any(s1,s2));

  return 0;
}

int any(const char s1[], const char s2[])
{
  int i,j;
  for(i=0;s1[i]!='\0';i++)
    for(j=0;s2[j]!='\0';j++)
      if(s1[i]==s2[j])
        return i;
  return -1;
}