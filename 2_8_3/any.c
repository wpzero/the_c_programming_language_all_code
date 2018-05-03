#include <stdio.h>

int any(char *d, char *s);
int cany(char *d, char c);

int main() {
  char *d = "hello world";
  char *s = "zd";
  printf("%d", any(d, s));
  return 0;
}

int any(char *d, char *s) {
  int i;
  for(i = 0; d[i] != '\0'; i++) {
    if(cany(s, d[i]) != -1)
      return i;
  }
  return -1;
}

int cany(char *d, char c) {
  int i;
  for(i = 0; d[i] != '\0'; i++) {
    if(d[i] == c)
      return i;
  }
  return -1;
}
