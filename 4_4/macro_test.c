#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))

static inline int max(int a, int b);

int main() {
  int i, j;
  i = 0;
  j = 1;
  printf("i is %d\n", i);
  printf("j is %d\n", j);
  printf("max i+1, j+1 using macro, result is %d\n", MAX(i+1, j+1));
  /* macro has side effect */
  printf("max i++, j++ using macro, result is %d\n", MAX(++i, ++j));
  i = 0;
  j = 1;
  /* inline function do not side effect */
  printf("inline function i++, j++, result is %d\n", max(++i, ++j));
  return 0;
}

extern inline int max(int a, int b) {
  return a > b ? a : b;
}
