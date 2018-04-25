#include <stdio.h>

int main() {
  long cn = 0;
  while(getchar() != EOF)
    cn++;
  printf("all count: %ld\n", cn);
  return 0;
}
