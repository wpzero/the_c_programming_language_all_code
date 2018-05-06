#include <stdio.h>
#include <string.h>

#define MAXLEN 100

void itoa(int n, char *str, int width);
void reverse(char *str);

int main() {
  int n1, n2;
  char r1[MAXLEN], r2[MAXLEN];
  n1 = 123;
  n2 = -123;
  itoa(n1, r1, 5);
  itoa(n2, r2, 5);
  printf("%s\n", r1);
  printf("%s\n", r2);
  return 0;
}

void itoa(int n, char *str, int width) {
  unsigned abs, i;
  i = 0;
  abs = (n < 0) ? -n : n;
  do {
    str[i++] = abs% 10 + '0';
  } while ((abs /= 10) > 0);
  for(; i < width;)
    str[i++] = '0';
  if(n < 0)
    str[i++] = '-';
  str[i] = '\0';
  reverse(str);
}

void reverse(char *str) {
  int i, j, tmp;
  for(i = 0, j = strlen(str)-1; i < j; i++, j--)
    tmp = str[i], str[i] = str[j], str[j] = tmp;
}
