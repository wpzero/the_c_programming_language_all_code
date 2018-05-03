#include <stdio.h>

#define MAX_LEN 200

void nstrcat(char *d, char *s);

int main() {
  char result[MAX_LEN] = "hello";
  char source[] = " world";
  nstrcat(result, source);
  printf("%s", result);
  return 0;
}

void nstrcat(char *d, char *s) {
  int i, j;
  i = j = 0;
  for(i = 0; d[i] != '\0'; i++)
    ;
  while((d[i++] = s[j++]) != '\0')
    ;
  d[i] = '\0';
}
