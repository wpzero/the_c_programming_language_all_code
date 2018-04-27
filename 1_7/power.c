#include <stdio.h>

int power(int, int);

#define MAX = 10;

int main() {
  int j = 0;
  for(j = 0; j < 10; j++)
    printf("%d ** %d %d\n", j, j, power(j, j));
  return 0;
}


int power(int b, int e) {
  int j, r;
  j = 0;
  r = 1;
  if(0 == e)
    ;
  else {
    for(j = 0; j < e; j++)
      r = r * b;
  }
  return r;
}
