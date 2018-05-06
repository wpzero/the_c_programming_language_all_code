#include <stdio.h>
#include <string.h>

#define MAXLINE 100

void itob(int n, char *str, int b);
void reverse(char *str);

int main() {
  int n1, n2;
  char r1[MAXLINE], r2[MAXLINE];
  n1 = 1234, n2 = -12002;
  itob(n1, r1, 2);
  printf("%s\n", r1);
  itob(n2, r2, 8);
  printf("%s\n", r2);
  return 0;
}

void itob(int n, char *str, int b) {
  unsigned abs, i;
  i = 0;
  abs = (n < 0) ? -n : n;
  do {
    str[i++] = abs%b + '0';
  } while (abs /= b);
  if(n < 0)
    str[i++] = '-';
  str[i] = '\0';
  reverse(str);
}

void reverse(char *str) {
  int i, j, tmp;
  for(i = 0, j = strlen(str)-1; i<j; i++, j--) {
    tmp = str[i], str[i] = str[j], str[j] = tmp;
  }
}
