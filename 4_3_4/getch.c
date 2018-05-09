/* Pushback string */
#include <stdio.h>
#include <string.h>
#define MAXBUFF 1000

char buff[MAXBUFF];
int pos;

char getch() {
  return pos > 0 ? buff[--pos] : getchar();
}

void ungetch(int c) {
  buff[pos++] = c;
}

void ungets(char *str) {
  int i = strlen(str);
  while(i > 0) {
    ungetch(str[--i]);
  }
}

int main() {
  char *str = "hello world";
  char c;
  ungets(str);
  while((c = getch()) != EOF) {
    printf("%c", c);
  }
  return 0;
}
