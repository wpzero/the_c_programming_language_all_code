#include "opstack.h"

double pop() {
  if(oppn > 0)
    return opstack[--oppn];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

void push(double v) {
  if(oppn > STKSIZE - 1) {
    printf("error: stack full, can not push value\n");
  } else {
    opstack[oppn++] = v;
  }
}
