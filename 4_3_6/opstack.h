#include <stdio.h>
#define STKSIZE 100

extern double opstack[];
extern int oppn;

double pop();
void push(double v);
double gtop();
void clear();
void swap();
void printall();
