#include <stdio.h>

int bitcount(unsigned d);

int main() {
  printf("%d", bitcount(077));
  return 0;
}

int bitcount(unsigned d) {
  int j = 0;
  while(d != 0) {
    d &= (d - 1);
    ++j;
  }
  return j;
}
