#include <stdio.h>

#define MAXLN 100

void wpstrcat(char *dest, char *src);

int main() {
  char str1[MAXLN] = "hello world";
  char *str2 = " Zhukefei";
  wpstrcat(str1, str2);
  printf("%s", str1);
  return 0;
}

void wpstrcat(char *dest, char *src) {
  int i;
  i = 0;
  while(*dest)
    dest++;
  while(*dest++ = *src++)
    ;
}
