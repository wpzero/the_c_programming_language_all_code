#include <stdio.h>

#define MAXLINE 1000

int getchars(char *line, int max);
void escape(char *dst, char *src);
void unescape(char *dst, char *src);

int main() {
  char line[MAXLINE];
  char esLine[MAXLINE];
  char uesLine[MAXLINE];
  printf("Input some characters, and stop by Ctrl+D\n");
  while (getchars(line, MAXLINE) == 0)
    ;
  escape(esLine, line);
  printf("The escape result below\n%s\n", esLine);
  unescape(uesLine, esLine);
  printf("The unescape result below\n%s\n", uesLine);
  return 0;
}

int getchars(char *line, int max) {
  int c, i;
  c = i = 0;
  while((c = getchar()) != EOF && i < max - 1) {
    line[i++] = c;
  }
  line[i] = '\0';
  return i;
}

void escape(char *dst, char *src) {
  int i, c, j;

  for(i = j = 0; (c = src[i]) != '\0'; i++) {
    switch (c) {
    case '\n':
      dst[j++] = '\\';
      dst[j++] = 'n';
      break;
    case '\t':
      dst[j++] = '\\';
      dst[j++] = 't';
      break;
    default:
      dst[j++] = c;
      break;
    }
  }

  dst[j] = '\0';
}

void unescape(char *dst, char *src) {
  int i, j, c;
  i = j = c = 0;
  for(i = j = 0; (c = src[i]) != '\0'; i++) {
    if(c == '\\') {
      switch (src[++i]) {
      case 'n':
        dst[j++] = '\n';
        break;
      case 't':
        dst[j++] = '\n';
        break;
      case '\0':
      default:
        dst[j++] = '\\';
        --i;
        break;
      }
    } else {
      dst[j++] = src[i];
    }
  }
  dst[j] = '\0';
}
