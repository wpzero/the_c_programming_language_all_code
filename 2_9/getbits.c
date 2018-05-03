#include <stdio.h>

int getbits(int d, int p, int len);

int main() {
  int i = 077;
  printf("%d", getbits(i, 4, 2));
  return 0;
}

int getbits(int d, int p, int len) {
  return (d >> (p - len + 1)) & ~(~0 << len);
}
