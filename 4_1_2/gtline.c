#include "gtline.h"

int gtline(char *str, int lim) {
  int i, c;
  for(i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 2; i++) {
    str[i] = c;
  }
  if(c == '\n')
    str[i++] = c;
  str[i] = '\0';
  return i;
}
