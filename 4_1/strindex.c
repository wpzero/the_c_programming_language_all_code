#include "strindex.h"

int strindex(char *str, char* pattern) {
  int i, j, k;
  for (i = 0; str[i] != '\0'; i++) {
    for (j=i, k=0; pattern[k]!='\0' && str[j]==pattern[k]; j++, k++)
      ;
    if (k > 0 && pattern[k] == '\0')
      return i;
  }
  return -1;
}
