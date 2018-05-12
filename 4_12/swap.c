#include <stdio.h>

#define swap(t, x, y) {t tmp; tmp = x, x = y, y = tmp;}
#define dprint(expr) printf(#expr " = %d\n", expr)

int main() {
  int i, j;
  i = 2;
  j = 3;
  swap(int, i, j);
  dprint(i);
  dprint(j);
}
