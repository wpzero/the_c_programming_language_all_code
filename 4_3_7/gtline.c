#include "gtline.h"

/* Do not include '\n' */
/* Assume str have enough space to save */
int gtline(char *str) {
  int c, i;
  i = 0;
  while((c = getchar()) != EOF && ((*str++)=c) != '\n')
    i++;
  if(c == '\n')
    *--str = '\0';
  else
    *str = '\0';
  return i;
}
