#include <stdio.h>
#include "getch.h"
#include "getop.h"
#include "opstack.h"
#include "atof.h"

#define MAXOP 100

int main() {
  int type;
  char s[MAXOP];
  double op2, op1;
  int power;
  while((type = getop(s)) != EOF) {
    switch (type) {
    case NUMB:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
      op2 = pop();
      if(op2 == 0.0)
        printf("error: zero divisor\n");
      else
        push(pop() / op2);
      break;
    case '%':
      op2 = pop();
      op1 = pop();
      if(op2 == 0.0) {
        printf("error: zero divisor\n");
      } else {
        power = op1/op2;
        push(op1-(power*op2));
      }
      break;
    case 't':
      printf("the top element is %f\n", gtop());
      break;
    case 'd':
      push(gtop());
      break;
    case 'c':
      clear();
      break;
    case 's':
      swap();
      break;
    case 'p':
      printall();
      break;
    case 'r':
      printf("the result is %.8g\n", pop());
      break;
    case '\n':
      break;
    default:
      printf("unknown command\n");
      break;
    }
  }
  return 0;
}
