/* JUST a example about scanf */
#include <stdio.h>

int main() {
  double sum, f;
  sum = f = 0;
  while(scanf("%lf", &f)==1)
    printf("\t%.2f\n", sum += f);
  return 0;
}
