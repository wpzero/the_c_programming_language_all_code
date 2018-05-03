#include <stdio.h>

void squeeze(char *, char);

int main() {
  char str[] = "hello world";
  printf("%s squeeze result is ", str);
  squeeze(str, 'o');
  printf("%s\n", str);
  return 0;
}

void squeeze(char *str, char t) {
  char c;
  int i, j;
  for(i = j = 0; (c = str[i]) != '\0'; i++) {
    if(c != t)
      str[j++] = str[i];
  }
  str[j] = '\0';
}
