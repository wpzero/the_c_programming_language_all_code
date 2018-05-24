/* This is a example of union */
/* very cool right? */
/* 也可以实现多态 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TABSIZE 100
#define INTTYPE 1
#define STRTYPE 2
#define FTYPE 3

typedef struct tag {
  char *name;
  int utype;
  union {
    int ival;
    float fval;
    char *sval;
  } value;
} tag;

tag *tagtab[TABSIZE];

static int pos;

tag *maketag();
void printftag(tag *);

int main() {
  int i;
  i = 0;
  tag *ptag;
  ptag = maketag();
  ptag->name = "zkf";
  ptag->utype = STRTYPE;
  ptag->value.sval = "xiaogouzi";
  tagtab[pos++] = ptag;
  ptag = maketag();
  ptag->name = "1+1";
  ptag->utype = INTTYPE;
  ptag->value.ival = 2;
  tagtab[pos++] = ptag;
  ptag = maketag();
  ptag->name = "0.1+0.2";
  ptag->utype = FTYPE;
  ptag->value.fval = 0.3;
  tagtab[pos++] = ptag;
  for(i=0;i<pos;i++) {
    printftag(tagtab[i]);
  }
  return 0;
}

tag *maketag() {
  return malloc(sizeof(tag));
}

void printftag(tag *ptag) {
  switch (ptag->utype) {
  case INTTYPE: {
    printf("%s = %d\n", ptag->name, ptag->value.ival);
    break;
  }
  case FTYPE: {
    printf("%s = %f\n", ptag->name, ptag->value.fval);
    break;
  }
  case STRTYPE: {
    printf("%s = %s\n", ptag->name, ptag->value.sval);
    break;
  }
  }
}
