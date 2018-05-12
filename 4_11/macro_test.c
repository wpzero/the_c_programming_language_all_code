#include <stdio.h>

#define dprint(expr) printf(#expr " = %g\n", expr)

int main() {
  double x, y;
  x = 10;
  y = 3;
  dprint(x/y);
  return 0;
}
