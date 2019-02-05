#include <stdio.h>

char lower(char);
void stringtolower(char[], char[]);

int main(void)
{
  char s1[] = "ESTA ES LA HISTORIA DE juan sarmiento";
  char s2[] = "Esta es la historia de juan sarmiento";
  printf("%s\n", s1);
  stringtolower(s1, s2);
  printf("%s\n", s2);
}

char lower(char c)
{
  return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

void stringtolower(char s1[], char s2[])
{
  int i = 0;
  while (s1[i] != '\0')
  {
    s2[i] = lower(s1[i]);
    i++;
  }
  s2[i] = '\0';
}
