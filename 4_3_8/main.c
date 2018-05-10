#include <stdio.h>
#include <string.h>
#include "atof.h"
#include "opstack.h"
#include "gtline.h"

#define MAXLN 1000

/* This variable will be shared to opstack oppn */
/* system think they are same one */
/* so extern variable is global */

int oppn = 3;

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
      printf("the oppn is %d\n", oppn);
    }else {
      printf("Unknown command\n");
    }
  }
  return 0;
}
