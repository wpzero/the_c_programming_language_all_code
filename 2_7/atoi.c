#include <stdio.h>
#include <string.h>

int atoi(char *str, int length);

int main() {
  char *str = "123";
  printf("%s add one is equal: %d\n", str, atoi(str, strlen(str)) + 1);
  return 0;
}


int atoi(char *str, int length) {
  char c;
  int i, n;
  n = i = 0;
  for(i = 0; i < length && str[i] <= '9' && str[i] >= '0'; i++)
    n = n * 10 + (str[i] - '0');
  return n;
}
