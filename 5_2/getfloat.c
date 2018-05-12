#include "getfloat.h"

int getfloat(float *ptr) {
  int c, sign, pow;
  pow = 1;
  while(isspace(c = getch()))
    ;
  if(!isdigit(c) && c != EOF && c != '.' && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }
  sign = (c == '-') ? -1 : 1;
  if(c == '+' || c == '-')
    c = getch();
  for(*ptr = 0; isdigit(c); c = getch())
    *ptr = *ptr * 10 + (c-'0');
  if(c == '.')
    c = getch();
  for(; isdigit(c); c=getch()) {
    *ptr = *ptr * 10 + (c-'0');
    pow *= 10;
  }
  *ptr *= sign;
  *ptr /= pow;
  if(c != EOF)
    ungetch(c);
  return c;
}
