#include <stdio.h>
#include <string.h>

#define MAXLINE 100

void itoa(int n, char *str);
void reverse(char *str);

int main() {
  int n1, n2;
  char r1[MAXLINE], r2[MAXLINE];
  n1 = 123;
  n2 = -123;
  itoa(n1, r1);
  printf("%s\n", r1);
  itoa(n2, r2);
  printf("%s\n", r2);
  return 0;
}

void itoa(int n, char *str) {
  int sign, i;
  i = 0;
  if((sign = n) < 0)
    n = -n;
  do {
    str[i++] = n%10 + '0';
  } while((n = n/10) > 0);
  if(sign < 0)
    str[i++] = '-';
  str[i] = '\0';
  reverse(str);
}

void reverse(char *str) {
  int i, j, tmp;
  for(i = 0, j = strlen(str)-1; i < j; i++, j--)
    tmp = str[i], str[i] = str[j], str[j] = tmp;
}
