#include <stdio.h>
#include <stdlib.h>

long gtlineln(FILE *f);
char *gtline(FILE *f, int linenum, long ln);

int main(int argc, char *argv[]) {
  if(argc == 1) {
    printf("Must give the file name");
    return 1;
  }
  long max, j, i, linenum;
  max = j = i = linenum = 0;
  char *longestline;
  char *filename = argv[1];
  FILE *fd = fopen(filename, "r");
  while((j = gtlineln(fd)) > 0) {
    if(j > max) {
      max = j;
      linenum = i;
    }
    i++;
  }
  rewind(fd);
  longestline = gtline(fd, linenum, max);
  printf("%s\n", longestline);
  printf("the length is %ld", max);
  free(longestline);
  fclose(fd);
  return 0;
}

long gtlineln(FILE *f) {
  long l = 0;
  char c;
  while((c = fgetc(f)) != EOF && c != '\n') {
    l++;
  }
  if(c == '\n')
    l++;
  return l;
}

char *gtline(FILE *f, int linenum, long ln) {
  char *r = malloc((ln + 1) * sizeof(char)), c = ' ';
  int j = 0;
  do {
    if(j == linenum)
      break;
    if(c == '\n')
      j++;
  } while((c = fgetc(f)) != EOF);
  j = 0;
  while((c = fgetc(f)) != EOF && c != '\n') {
    r[j] = c;
    j++;
  }
  if(c == '\n') {
    r[j] = '\n';
    j++;
  }
  r[j] = '\0';
  return r;
}
