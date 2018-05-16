#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLNS 10000

int main(int argc, char *argv[]) {
  char *lines[MAXLNS];
  char *buf = NULL;
  char *ptn;
  FILE *f;
  int i, j;
  i = j = 0;
  size_t n;
  n = 0;

  if(argc < 2) {
    return 1;
  } else
    ptn = argv[1];

  if(argc == 2) {
    f = stdin;
  } else {
    f = fopen(argv[2], "r");
    if(!f) {
      perror("open");
      return 1;
    }
  }

  while(getline(&buf, &n, f) != -1) {
    if(strstr(buf, ptn)) {
      *(lines+i) = buf;
      buf = NULL;
      i++;
    }
  }

  if(!feof(f)) {
    ferror(f);
    return 1;
  }

  for(j = 0; j < i; j++) {
    printf("%s", *(lines+j));
    free(*(lines+j));
  }

  fclose(f);

  return 0;
}
