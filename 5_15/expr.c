#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define STKSZ 1000

static int stack[STKSZ];
static int stkpos;

int pop() {
  if(stkpos < 1)
    return 0;
  else
    return *(--stkpos+stack);
}

void push(int v) {
  if(stkpos>STKSZ-1) {
    printf("Too many operands");
  } else {
    *(stack+stkpos++) = v;
  }
}

int isnum(char *str) {
  int r=1;
  size_t n=strlen(str);
  while(n>0) {
    /* isdigit return value maybe bigger than one */
    /* so use && not & */
    r = r && isdigit(*str++);
    n--;
  }
  return r;
}

int main(int argc, char *argv[]) {
  char *curarg;
  int op1, op2;
  while(--argc>0) {
    curarg = *++argv;
    if(isnum(curarg))
      push(atoi(curarg));
    else {
      switch (*curarg) {
      case '+': {
        push(pop() + pop());
        break;
      }
      case '-': {
        op2 = pop();
        op1 = pop();
        push(op1-op2);
        break;
      }
      case '*': {
        push(pop()*pop());
        break;
      }
      case '/': {
        op2 = pop();
        op1 = pop();
        push(op1/op2);
        break;
      }
      default:
        break;
      }
    }
  }

  printf("the result is %d", pop());

  return 0;
}
