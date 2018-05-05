#include <stdio.h>

int main() {
  int ndigit[10], nwhite, nother, c, i;
  c= i = nwhite = nother = 0;
  for(i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }

  while((c = getchar()) != EOF) {
    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      ++ndigit[c - '0'];
      break;
    case ' ':
    case '\t':
    case '\n':
      ++nwhite;
      break;
    default:
      ++nother;
      break;
    }
  }

  printf("white count is %d\n", nwhite);
  printf("other count is %d\n", nother);
  for(i = 0; i < 10; i++) {
    printf("%d count is %d\n", i, ndigit[i]);
  }

  return 0;
}
