#include <stdio.h>
#include <string.h>

void reserse(char *str);

int main() {
  char str[] = "hello world";
  reserse(str);
  printf("%s", str);
  return 0;
}

void reserse(char *str) {
  int i, j, tmp;
  for(i = 0, j = strlen(str)-1; i < j; i++, j--) {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
}
