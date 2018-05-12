#include <stdio.h>
#include <string.h>

void reverse(char *str);
void rreverse(char *str, int pos);

int main() {
  char str[] = "hello world";
  reverse(str);
  printf("the result is %s\n", str);
  return 0;
}

void reverse(char *str) {
  rreverse(str, 0);
}

void rreverse(char *str, int pos) {
  if(pos >= strlen(str)/2)
    return;
  int tmp;
  rreverse(str, pos+1);
  tmp = str[pos];
  str[pos] = str[strlen(str)-(1+pos)];
  str[strlen(str)-(1+pos)] = tmp;
}
