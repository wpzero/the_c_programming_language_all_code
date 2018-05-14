#include <stdio.h>

int wpstrend(char *str, char t);

int main() {
  char *str = "hello world";
  printf("the result strend is %d\n", wpstrend(str, 'd'));
  printf("the result strend is %d\n", wpstrend(str, 'o'));
  return 0;
}

int wpstrend(char *str, char t) {
  while(*str++)
    ;
  if(*(str-2) == t)
    return 1;
  else
    return 0;
}
