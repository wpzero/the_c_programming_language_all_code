#include <stdio.h>
#include <string.h>
#include "atof.h"
#include "opstack.h"
#include "gtline.h"

#define MAXLN 1000

int oppn = 100;

int main() {
  char str[MAXLN];
  int op2;
  int op1;
  while(gtline(str)) {
    if(isnum(str)) {
      push(atof(str));
    } else if(!strcmp(str, "+")) {
      op2 = pop();
      op1 = pop();
      push(op1+op2);
    } else if(!strcmp(str, "-")) {
      op2 = pop();
      op1 = pop();
      push(op1-op2);
    } else if(!strcmp(str, "*")) {
      op2 = pop();
      op1 = pop();
      push(op1*op2);
    } else if(!strcmp(str, "/")) {
      op2 = pop();
      op1 = pop();
      push(op1/op2);
    } else if(!strcmp(str, "result")) {
      printf("The result is %f\n", pop());
    } else if(!strcmp(str, "oppn")) {
      printf("The current oppn is %d", oppn);
    } else {
      printf("Unknown command\n");
    }
  }
  return 0;
}
