#include <stdio.h>

int indexOfArray(char *, size_t l, char e);

int main() {
  char c, p;
  char sl[] = {' ', '\t', '\n'};
  long cc = 0, wc = 0;
  while((c = getchar()) != EOF) {
    ++cc;
    if(indexOfArray(sl, sizeof(sl)/sizeof(char), p) == -1 && indexOfArray(sl, sizeof(sl)/sizeof(char), c) != -1)
      ++wc;
    p = c;
  }
  printf("char count: %ld\n", cc);
  printf("word count: %ld\n", wc);
  return 0;
}


int indexOfArray(char *list, size_t l, char e) {
  size_t j;
  for(j = 0; j < l; j++) {
    if(e == list[j])
      return j;
  }
  return -1;
}
