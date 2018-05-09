#include <stdio.h>
#define STKSIZE 100

double opstack[STKSIZE];
int oppn;

double pop();
void push(double v);
