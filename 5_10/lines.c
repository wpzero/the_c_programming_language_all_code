#include "lines.h"

int gtline(char *str, int lim) {
  int i, c;
  for(i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 2; i++) {
    str[i] = c;
  }
  if(c == '\n')
    str[i++] = c;
  str[i] = '\0';
  return i;
}

int readlines(char *lines[], int maxlines) {
  char *p, line[MAXLEN];
  int n, nlines;
  nlines = 0;
  while((n = gtline(line, MAXLEN))) {
    /* 动态创建字符串 */
    if(nlines > maxlines || (p = malloc(n)) == NULL) {
      return -1;
    } else {
      /* remove the newline */
      if(line[n-1] == '\n')
        line[n-1] = '\0';
      strcpy(p, line);
      lines[nlines] = p;
    }
    nlines++;
  }
  return nlines;
}

void writelines(char *lines[], int nlines) {
  int i;
  for(i=0; i<nlines; i++)
    printf("%s\n", *(lines+i));
}
