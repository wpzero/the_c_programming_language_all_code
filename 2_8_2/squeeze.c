#include <stdio.h>

void squeeze(char *d, char *s);
int cindex(char *d, char c);

int main() {
  char d[] = "hello world";
  char *s = "hw";
  squeeze(d, s);
  printf("%s", d);
  return 0;
}

void squeeze(char *d, char *s) {
  int i, j;
  for(i = j = 0; d[i] != '\0'; i++)
    if(cindex(s, d[i]) == -1)
      d[j++] = d[i];
  d[j] = '\0';
}

int cindex(char *d, char c) {
  int j;
  for(j = 0; d[j] != '\0'; j++) {
    if(d[j] == c)
      return j;
  }
  return -1;
}
