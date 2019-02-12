#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100  //max size of the operator
#define NUMBER '0' //signal that a number was found

int getop(char[]);
void push(double);
double pop(void);

/* Reverse polish calculator */
main()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF)
  {
    switch (type)
    {
    case NUMBER:
      push(atof(s));
      break;
    case '+': //the order is not important here.
      push(pop() + pop()); 
      break;
    case '*': //ther order isn't important here either.
      push(pop() * pop());
      break;
    case '-': //the order is imporant therefore it must be stressed
      op2 = pop();
      push(pop() - op2); 
      break;
    case '/':
      op2 = pop();
      if (op2 != 0.0)
        push(pop() / op2);
      else
        printf("error: zero divisor\n");
      break;
    case '\n': //end of instruction
      printf("Result:\t%.8g\n", pop());
      break;
    default:
      printf("error: unknown command %s\n", s);
      break;
    }
  }
  return 0;
}

