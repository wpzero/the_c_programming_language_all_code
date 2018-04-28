#include <stdio.h>

#define LN 10

int print80line();

int main() {
  while(print80line() > 0)
    ;
  return 1;
}

int print80line() {
  char buff[LN + 1], c;
  int j = 0;
  while((c = getchar()) != EOF && c != '\n') {
    ++j;
    if(j == LN) {
      buff[j] = '\0';
      printf("%s", buff);
    } else if(j < LN) {
      buff[j] = c;
    }
    if(j >= LN)
      printf("%c", c);
  }
  if(c == '\n') {
    j++;
    printf("%c", '\n');
  }
  return j;
}
