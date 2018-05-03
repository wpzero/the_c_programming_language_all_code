#include <stdio.h>

int htoi(char *str);

int hctoi(char c);

int main() {
  char *str = "x012A";
  printf("The %s is %d", str, htoi(str));
  return 0;
}

int htoi(char *str) {
  char c;
  int r, i;
  r = i = 0;
  for(i = 0; (c = str[i]) != '\0'; i++) {
    if(i == 0 && (c == 'x' || c == 'X')) {
      continue;
    } else if (i == 0) {
      printf("error format");
      return 0;
    }
    if(i == 1 && c == '0') {
      continue;
    } else if (i == 1) {
      printf("error format");
      return 0;
    }
    r = r * 16 + hctoi(c);
  }
  return r;
}

int hctoi(char c) {
  if(c <= '9' && c >= '0')
    return c - '0';
  switch (c) {
  case 'A':
  case 'a': {
    return 10;
  }
  case 'B':
  case 'b': {
    return 11;
  }
  case 'C':
  case 'c': {
    return 12;
  }
  case 'D':
  case 'd': {
    return 13;
  }
  case 'E':
  case 'e': {
    return 14;
  }
  case 'F':
  case 'f': {
    return 15;
  }
  default:
    return 0;
  }
}
