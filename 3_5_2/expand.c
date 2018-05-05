#include <stdio.h>

#define MAXLINE 1000

void expand(char *src, char *dst);

int main() {
  char str[] = "a-bjjjjj8-9-8a-z";
  char dst[MAXLINE];
  expand(str, dst);
  printf("%s", dst);
  return 0;
}

void expand(char *src, char *dst) {
  int i, j, bgn, end;
  i = j = bgn = end = 0;
  for(i = 0 ; src[i] != '\0'; i++) {
    if(src[i+1] != '\0' && src[i+2] != '\0') {
      if(src[i+1] == '-' && '0' <= src[i] && src[i] <= '9' && src[i+2] >= src[i] && src[i+2] <= '9') {
        for(bgn = src[i], end = src[i+2]; bgn <= end; bgn++)
          dst[j++] = bgn;
        i += 2;
      } else if (src[i+1] == '-' && 'a' <= src[i] && src[i] < 'z' && src[i+2] >= src[i] && src[i+2] <= 'z') {
        for(bgn = src[i], end = src[i+2]; bgn <= end; bgn++)
          dst[j++] = bgn;
        i += 2;
      } else {
        dst[j++] = src[i];
      }
    } else {
      dst[j++] = src[i];
    }
  }
  dst[j] = '\0';
}
