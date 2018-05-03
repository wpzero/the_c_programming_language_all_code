#include <stdio.h>

int setbits(int d, int p, int len, int s);

int main() {
  int i = 077;
  printf("%d\n", setbits(i, 3, 2, 4));
  return 0;
}

int setbits(int d, int p, int len, int s) {
  return (d & ~(~(~0 << len) << (p - len + 1))) | (s | ~(~0 << len));
}
