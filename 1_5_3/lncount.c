#include <stdio.h>

int main () {
  long ln = 0;
  char c;
  while((c = getchar()) != EOF) {
    if('\n' == c)
      ++ln;
  }
  printf("all the count of lines: %ld", ln);
  return 0;
}
