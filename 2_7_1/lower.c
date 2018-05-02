#include <stdio.h>

int lower(int c);

int main() {
  char c1 = 'Q';
  printf("%c converted to %c\n", c1, lower(c1));
  char c2 = 'j';
  printf("%c converted to %c\n", c2, lower(c2));
  return 0;
}

int lower(int c) {
  if(c <= 'Z' && c >= 'A')
    return c + ('a' - 'A');
  return c;
}
