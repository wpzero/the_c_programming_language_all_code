#include "getch.h"

char getch() {
  return pos > 0 ? buff[--pos] : getchar();
}

void ungetch(int c) {
  buff[pos++] = c;
}
