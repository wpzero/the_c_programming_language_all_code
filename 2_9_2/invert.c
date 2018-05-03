#include <stdio.h>

int revert(int d, int p, int len);

int main() {
  printf("%d\n", revert(077, 4, 2));
  return 0;
}

int revert(int d, int p, int len) {
  return (d & ~(~(~0 << len) << (p - len + 1))) | (~d & (~(~0 << len) << (p - len + 1)));
}
