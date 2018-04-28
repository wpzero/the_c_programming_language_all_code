#include <stdio.h>
#include <string.h>

#define MAXRLEN 1000

int gtln(char *line);
void reverse(char *line, int l);

int main() {
  char ln[MAXRLEN];
  int l = 0;
  while((l = gtln(ln)) != 0) {
    reverse(ln, strlen(ln));
    printf("%s\n", ln);
  }
  return 0;
}


int gtln(char *line) {
  char c;
  int j = 0;
  while((c = getchar()) != EOF && c != '\n' && j < MAXRLEN) {
    line[j] = c;
    ++j;
  }
  if(c == '\n') {
    line[j] = '\n';
    ++j;
  }
  line[j] = '\0';
  return j;
}

void reverse(char *line, int l) {
  int i = 0;
  char tmp;
  --l;
  if(line[l] == '\n')
    --l;
  while(i < l) {
    tmp = line[l];
    line[l] = line[i];
    line[i] = tmp;
    --l;
    ++i;
  }
}
