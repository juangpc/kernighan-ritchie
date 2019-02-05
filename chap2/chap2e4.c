#include <stdio.h>

#define TRUE 1
#define FALSE 0

void squeeze(char[], const char);
void squeeze2(char[], const char[]);

int main(void)
{
  char s1[] = "Esta es una prueba muy interesante.";
  char c = 'a';
  char s2[] = "anti";
  printf("  Testing string: %s\n", s1);
  // squeeze(s1, c);
  // printf("Resulting string: %s\n", s1);
  squeeze2(s1, s2);
  printf("Resulting string: %s\n", s1);

  return 0;
}

void squeeze(char s[], const char c)
{
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

void squeeze2(char s1[], const char s2[])
{
  int i, j, k, keep_char;
  for (i = j = 0; s1[i] != '\0'; i++)
  {
    keep_char = TRUE;
    for (k = 0; s2[k] != '\0'; k++)
      if (s1[i] == s2[k])
      {
        keep_char = FALSE;
        break;
      }
    if (keep_char)
      s1[j++] = s1[i];
  }
  s1[j] = '\0';
}
