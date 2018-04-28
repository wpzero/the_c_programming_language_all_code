#include <stdio.h>
#include <string.h>

#define RATE 0.3
#define BUFSIZE 1000
#define MAXBLANKLEN 100
#define DEFAULCOLUMNS 100

char buff[BUFSIZE];
int buffIndex = 0;

extern char buff[];
extern int buffIndex;

int prtln(int maxcolumns);

int main(int argc, char *argv[]) {
  /* Assume maxcolumns less than 1000 */
  int maxcolumns = 100;
  while(prtln(maxcolumns) > 0)
    ;
  return 0;
}

int prtln(int maxcolumns) {
  char c;
  int j = buffIndex;

  while((c = getchar()) != EOF && c != '\n' && j < maxcolumns) {
    if(c == ' ' || c == '\t'){
      if(buffIndex > 0) {
        printf("%s", buff);
        buffIndex = 0;
      }
      printf("%c", c);
    } else {
      buff[buffIndex] = c;
      ++buffIndex;
      buff[buffIndex] = '\0';
    }
    ++j;
  }

  if(c == '\n') {
    if(buffIndex > 0) {
      printf("%s", buff);
      buffIndex = 0;
    }
    printf("\n");
  } else if(c == EOF) {
    if(buffIndex > 0) {
      printf("%s", buff);
      buffIndex = 0;
    }
  } else {
    printf("\n");
  }

  if(c == EOF)
    return 0;
  else
    return 1;
}
