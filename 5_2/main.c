#include <stdio.h>
#include "getch.h"
#include "getfloat.h"

#define MAXSIZE 100

int main() {
  float arr[MAXSIZE];
  int n, i;
  i = n = 0;
  for(n = 0; getfloat(&arr[n]) != EOF; n++)
    ;
  for(; i < n; i++) {
    printf("%g\n", arr[i]);
  }
  return 0;
}
