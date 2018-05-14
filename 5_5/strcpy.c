#include <stdio.h>

#define MAXLEN 100

void wstrcpy(char *d, char *s) {
  while((*d++ = *s++) != '\0')
    ;
}

int main() {
  char str[MAXLEN];
  wstrcpy(str, "hello world");
  printf("%s", str);
  return 0;
}
