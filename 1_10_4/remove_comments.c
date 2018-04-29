#include <stdio.h>

/* helo
   wlll */

int singleQ;                    /* hello world */
int doubleQ; // zjkjjkjfdf
int multipleC;

int prtln();

int main() {
  while(prtln() > 0)
    ;
  return 0;
}


int prtln() {
  int r, scmt, prtn, skip;
  char c, p;
  p = '\0';
  r = scmt = prtn = skip = 0;
  while((c = getchar()) != EOF && c != '\n') {
    r = 1;

    if((p == '/' && c == '/') && singleQ == 0 && doubleQ == 0 && multipleC == 0)
      scmt = 1;
    if((p == '/' && c == '*') && singleQ == 0 && doubleQ == 0 && multipleC == 0)
      multipleC = 1;

    if(skip == 1) {
      if(multipleC == 0 && scmt == 0) {
        ++prtn;
        printf("%c", p);
      }
      skip = 0;
    }

    if(p != '/' && c == '/' && singleQ == 0 && doubleQ == 0 && multipleC == 0 && scmt == 0)
      skip = 1;
    else
      skip = 0;

    if(multipleC == 0 && scmt == 0 && skip == 0) {
      printf("%c", c);
      ++prtn;
    }

    if((p == '*' && c == '/') && singleQ == 0 && doubleQ == 0 && multipleC == 1)
      multipleC = 0;

    if((p == '\'') && doubleQ == 0 && multipleC == 0 && scmt == 0 && singleQ == 1) {
      singleQ = 0;
    }

    if((p == '\'') && doubleQ == 0 && multipleC == 0 && scmt == 0 && singleQ == 0) {
      singleQ = 1;
    }

    if((p == '\"') && singleQ == 0 && multipleC == 0 && scmt == 0) {
      if(doubleQ == 0)
        doubleQ = 1;
      else
        doubleQ = 0;
    }

    p = c;
  }
  if(c == '\n') {
    if(!(prtn == 0 && multipleC == 1))
      printf("\n");
    r = 1;
  }
  return r;
}
