#include <stdio.h>
#define MAXLN 100

void wpstrncpy(char *s, char *t, int n);
void wpstrncat(char *s, char *t, int n);
int wpstrncmp(char *s, char *t, int n);

int main() {
  char str1[MAXLN] = "hello world";
  wpstrncpy(str1, "ZhuKefei", 3);
  printf("the result is %s\n", str1);
  wpstrncat(str1, "Wp", 2);
  printf("the result is %s\n", str1);
  printf("the result is %d\n", wpstrncmp("hello", "helzo", 4));
  return 0;
}

void wpstrncpy(char *s, char *t, int n) {
  int i;
  for(i=0; i < n && (*s++=*t++) != '\0'; i++)
    ;
}

void wpstrncat(char *s, char *t, int n) {
  int i;
  while(*s++)
    ;
  s = s-1;
  for(i=0; i<n && (*s++=*t++); i++)
    ;
}

int wpstrncmp(char *s, char *t, int n) {
  int i;
  for(i=0; i<n && *s == *t; s++, t++, i++) {
    if(*s == *t == '\0')
      return 0;
  }
  if(i == n)
    return 0;
  return *s-*t;
}
