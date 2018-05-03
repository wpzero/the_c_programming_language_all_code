#include <stdio.h>

int bitcount(unsigned d);

int main() {
  printf("%d\n", bitcount(077));
  return 0;
}

int bitcount(unsigned d) {
  int r;
  r = 0;
  for(; d != 0; d >>= 1) {
    if(d & 01)
      ++r;
  }
  return r;
}
