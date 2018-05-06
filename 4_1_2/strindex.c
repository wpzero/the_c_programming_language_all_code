#include "strindex.h"

int strindex(char *str, char* pattern) {
  int i, j, k;
  for (i = strlen(str)-1; i >= strlen(pattern)-1; i--) {
    for (j=i, k=strlen(pattern)-1; str[j] == pattern[k] && k >= 0 && j >= 0; j--, k--)
      ;
    if(k == -1)
      return i;
  }
  return -1;
}
