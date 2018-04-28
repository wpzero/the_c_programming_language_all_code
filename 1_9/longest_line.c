#include <stdio.h>

#define MAXLINE 1000

int gtline(char *line, int maxline);
void copy(char *to, char *from);

int main() {
  char line[MAXLINE];
  char longestline[MAXLINE];
  int pl = 0, l = 0;
  while((l = gtline(line, MAXLINE)) > 0) {
    if(l > pl) {
      copy(longestline, line);
      pl = l;
    }
  }
  printf("%s\n", longestline);
  printf("long is %d\n", pl);
}


int gtline(char *line, int maxline) {
  int j = 0;
  char c;
  for(j = 0; j < (maxline - 1) && (c = getchar()) != '\n' && c != EOF; j++) {
    line[j] = c;
  }
  if(c == '\n') {
    line[j] = '\n';
    ++j;
  }
  line[j] = '\0';
  return j;
}


/* void copy(char *to, char *from) { */
/*   char c; */
/*   int j = 0; */
/*   for(j = 0; (c = from[j]) != '\0'; j++) { */
/*     to[j] = from[j]; */
/*   } */
/*   to[j] = '\0'; */
/* } */

/* better solution copy */

void copy(char *to, char *from) {
  int j = 0;
  while((to[j] = from[j]) != '\0')
    ++j;
}
