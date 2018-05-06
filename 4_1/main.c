#include <stdio.h>
#include "strindex.h"
#include "gtline.h"

#define MAXLN 1000

int main() {
  char line[MAXLN];
  char *pattern = "hello";
  while(gtline(line, MAXLN)>0) {
    if(strindex(line, pattern) != -1)
      printf("%s", line);
  }
  return 0;
}
