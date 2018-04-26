#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, ln, wn, cn, state;
  state = OUT;
  ln = wn = cn = 0;
  while((c = getchar()) != EOF) {
    ++cn;
    if(c == '\n')
      ++ln;
    if(c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if(state == OUT) {
      state = IN;
      ++wn;
    }
  }

  printf("char count: %d\n", cn);
  printf("word count: %d\n", wn);
  printf("line count: %d\n", ln);

  return 0;
}
