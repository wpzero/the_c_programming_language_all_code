/* This is an example about var-length arguments function */
/* Simple version printf */
#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...);

int main() {
  minprintf("hello word %d, %s", 10, "zkf");
  return 0;
}

void minprintf(char *fmt, ...) {
  va_list ap;
  int d;
  int c;
  char *str;
  double f;

  va_start(ap, fmt);

  while(*fmt) {
    if((c=*fmt++) != '%') {
      putchar(c);
      continue;
    }
    switch((c=*fmt++)) {
    case 'd':
      d = va_arg(ap, int);
      printf("%d", d);
      break;
    case 'f':
      f = va_arg(ap, double);
      printf("%f", f);
      break;
    case 's':
      str = va_arg(ap, char *);
      printf("%s", str);
      break;
    }
  }

  va_end(ap);
}
