#include "getint.h"

int getint(int *ptr) {
  int c, sign;
  while(isspace(c = getch()))
    ;
  if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if(c == '+' || c == '-')
    c = getch();
  for(*ptr = 0; isdigit(c); c = getch())
    *ptr = *ptr * 10 + (c - '0');
  *ptr = *ptr * sign;
  if(c != EOF)
    ungetch(c);
  return c;
}
