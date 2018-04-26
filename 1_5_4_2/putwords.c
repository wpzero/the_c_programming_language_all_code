#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  char c;
  int state = OUT;

  while((c = getchar()) != EOF) {
    if(' ' == c || '\t' == c || '\n' == c) {
      if(IN == state) {
        printf("\n");
      }
      state = OUT;
    } else {
      printf("%c", c);
      state = IN;
    }
  }

  return 0;
}
