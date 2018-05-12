#include <stdio.h>
#include "getch.h"
#include "getint.h"

#define MAXSIZE 100

int main() {
  int arr[MAXSIZE];
  int n, i;
  i = n = 0;
  for(n = 0; getint(&arr[n]) != EOF; n++)
    ;
  for(; i < n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
