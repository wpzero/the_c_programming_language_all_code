#include <stdio.h>

#define MAXCOUNT 1000

int prtTrailline();

int main() {
  while(prtTrailline() != 0)
    ;
  return 0;
}

int prtTrailline() {
  int r, i, ri;
  char c, buff[MAXCOUNT];
  r = i = ri = 0;
  while((c = getchar()) != EOF && c != '\n' && i < (MAXCOUNT - 1)) {
    buff[i] = c;
    if(0 == r)
      r = 1;
    if(c != '\n' && c != ' ' && c != '\t')
      ri = i;
    ++i;
  }
  buff[ri + 1] = '\0';
  if(c == '\n')
    r = 1;
  if(ri > 0)
    printf("%s\n", buff);
  return r;
}
