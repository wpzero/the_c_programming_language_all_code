#include <stdio.h>
#include <string.h>

void trim(char *str);

int main() {
  char str[] = "hello world     ";
  printf("length: %ld\n", strlen(str));
  trim(str);
  printf("length: %ld\n", strlen(str));
  return 0;
}

void trim(char *str) {
  long n;
  for(n = strlen(str)-1; n >= 0; n--) {
    if(str[n] != ' ' && str[n] != '\t' && str[n] != '\n')
      break;
  }
  str[++n] = '\0';
}
