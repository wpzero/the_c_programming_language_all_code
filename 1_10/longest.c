#include <stdio.h>

#define MAXLN 1000

char cline[MAXLN];
char longestline[MAXLN];
int max;

int getln();
void cp();

extern char cline[];
extern char longestline[];
extern int max;

int main() {
  int l = 0;
  while((l = getln()) > 0) {
    if(l > max) {
      max = l;
      cp();
    }
  }
  printf("%s\n", longestline);
  return 0;
}

int getln() {
  char c;
  int j = 0;
  while((c = getchar()) != '\n' && c != EOF && j < MAXLN) {
    cline[j] = c;
    ++j;
  }
  if(c == '\n') {
    ++j;
    cline[j] = '\n';
  }
  cline[j] = '\0';
  return j;
}

void cp() {
  int j = 0;
  while((longestline[j] = cline[j]) != '\0')
    ++j;
}
