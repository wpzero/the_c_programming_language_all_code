#include <stdio.h>

#define MAXLN 1000

void itoa(char *str, int v);

int ritoa(char *str, int v, int pos);

int main() {
  int i = -123;
  char str[1000];
  itoa(str, i);
  printf("the result is %s\n", str);
  return 0;
}

void itoa(char *str, int v) {
  int pos;
  pos = 0;
  if(v < 0) {
    v = -v;
    str[pos++] = '-';
  }
  pos = ritoa(str, v, pos);
  str[pos] = '\0';
}

int ritoa(char *str, int v, int pos) {
  if(v/10 > 0)
    pos = ritoa(str, v/10, pos);
  /* Do not forget to convert i to c */
  str[pos++] = v%10 + '0';
  return pos;
}
