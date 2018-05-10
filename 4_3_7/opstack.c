#include "opstack.h"

/* Only this file can access these variable */
/* So only defined in c file not header file */
static double opstack[STKSIZE];
static int oppn;

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

double gtop() {
  if(oppn > 0)
    return opstack[oppn-1];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

void clear() {
  oppn = 0;
}

void swap() {
  if(oppn < 2)
    return;
  double tmp = opstack[oppn-1];
  opstack[oppn-1] = opstack[oppn-2];
  opstack[oppn-2] = tmp;
}

void printall() {
  int i = oppn;
  while(i > 0) {
    --i;
    printf("%f%c", opstack[i], i ? ',' : ' ');
  }
}
