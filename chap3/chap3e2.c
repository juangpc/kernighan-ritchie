#include <stdio.h>

int main(void)
{
}

void escape(char from[], char to[])
{
  char c;
  int i, j;
  i = j = 0;
  while ((c = from[i++]) != '\0')
  {
    switch (c)
    {
    case '\n':
      to[j++] = '\\';
      to[j++] = 'n';
      break;
    case '\t':
      to[j++] = '\\';
      to[j++] = 't';
      break;
    default:
      break;
    }
  }
  to[j] = '\0';
}

void escape2(char from[], char to[])
{
  char c;
  int i,j;
  i = j = 1;
  if (from[0] == '\0')
  {
    to[0] = '\0';
  }
  else
  {
    to[0] = from[0];
    while ((c = from[i]) != '\0')
    {
      switch (c)
      {
        case 'n':
          if(from[i-1]=='\\')
            to[--j]='\n';
          break;
        case 't':
          if(from[i-1]=='\\')
            to[--j]='\t';
          break;
        default:
          to[j]=from[i];
          break;
      }
      i++;
      j++;
    }
  }
}