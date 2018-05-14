#include <stdio.h>

int wpstrcmp(char *s, char *t);

int main() {
  char *str1 = "hello world";
  char *str2 = "hello world1";
  printf("the cmp result is %d", wpstrcmp(str1, str2));
  return 0;
}

int wpstrcmp(char *s, char *t) {
  for(; *s == *t; s++, t++) {
    if(*s == *t == '\0')
      return 0;
  }
  return *s - *t;
}
