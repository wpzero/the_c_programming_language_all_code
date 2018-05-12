#include <stdio.h>

void printd(int i);

int main() {
  int i1, i2;
  i1 = 120;
  i2 = 123;
  printd(i1);
  printf("\n");
  printd(i2);
  return 0;
}

void printd(int i) {
  int b = 10;
  if(i < 0) {
    printf("\n");
    i = -i;
  }
  if((i/b) > 0)
    printd(i/b);
  printf("%d", i%b);
}
