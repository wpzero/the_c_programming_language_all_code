#include <stdio.h>

int rightrot(int d, int len);

int main() {
  printf("%d", rightrot(077, 2));
  return 0;
}

int rightrot(int d, int len) {
  return (d >> len) | ((d & ~(~0 << len)) << (sizeof(d) * 8 - len));
}
