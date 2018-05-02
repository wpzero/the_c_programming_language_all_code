#include <stdio.h>

#define LIMIT 100

int getl(int limit);

int main() {
  int i, j;
  i = j = 0;
  while((i = getl(LIMIT)) > 0)
    ++j;
  printf("line number: %d\n", j);
  return 0;
}

int getl(int limit) {
  char c;
  int i = 0;
  for(i = 0; (i < limit) & ((c = getchar()) != EOF) & (c != '\n'); i++)
    ;
  if(c == '\n')
    ++i;
  return i;
}
