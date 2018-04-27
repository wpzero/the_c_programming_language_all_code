#include <stdio.h>

int main() {
  char c;
  int nwhite, nother, j;
  int numbers[10];
  nwhite = nother = j = 0;

  for(j = 0; j < 10; j++) {
    numbers[j] = 0;
  }

  while((c = getchar()) != EOF) {
    if(c <= '9' && c >= '0') {
      ++numbers[c - '0'];
    } else if(c == '\n' || c == '\t' || c == ' ') {
      ++nwhite;
    } else {
      ++nother;
    }
  }

  for(j = 0; j < 10; j++) {
    printf("%d number count: %d\n", j, numbers[j]);
  }
  printf("white count: %d\n", nwhite);
  printf("other character count: %d\n", nother);

  return 0;
}
