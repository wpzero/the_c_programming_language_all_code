#include "getop.h"

int getop(char *str) {
  int i, c;
  i = 0;
  while((c = getch()) == ' ' || c == '\t')
    ;
  str[0] = '\0';

  /* Operator */
  if(!isdigit(c) && c != '.')
    return c;

  /* Operad */
  if(isdigit(c)) {
    str[i++] = c;
    while(isdigit(c = getch()))
      str[i++] = c;
  }
  if(c == '.') {
    str[i++] = c;
    while(isdigit(c = getch()))
      str[i++] = c;
  }
  str[i] = '\0';

  if(c != EOF)
    ungetch(c);
  return NUMB;
}
