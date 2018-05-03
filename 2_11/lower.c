#include <stdio.h>

int lower(int c);

int main() {
  printf("%c\n", lower('Q'));
  return 0;
}

int lower(int c) {
  return ('A' <= c && c <= 'Z') ? (c + 'a' - 'A') : c;
}
