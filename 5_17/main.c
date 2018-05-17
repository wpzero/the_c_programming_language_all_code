#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qsort.h"
#include "numcmp.h"

#define MAXLNS 10000

int main(int argc, char *argv[]) {
  char *lines[MAXLNS], c;
  char *buf = NULL;
  size_t n;
  int numeric, nlines, j;
  numeric = nlines = j = 0;
  FILE *f;
  int (*comp)(void *, void *);

  /* 非常经典的一个pointer and array 的用法*/
  while(--argc > 0 && (*++argv)[0]=='-') {
    while((c = *++argv[0]) != '\0') {
      switch (c) {
      case 'n': {
        numeric = 1;
        break;
      }
      default:
        break;
      }
    }
  }

  if(argc == 0) {
    f = stdin;
  } else {
    f = fopen(*argv, "r");
    /* open failed, fopen return NULL, we have to check the errno */
    if(!f) {
      perror("open");
      return 1;
    }
  }

  while(getline(&buf, &n, f) != -1 && nlines < MAXLNS) {
      *(lines+nlines) = buf;
      buf = NULL;
      nlines++;
  }

  if(!feof(f)) {
    ferror(f);
    return 1;
  }

  if(numeric)
    comp = (int (*)(void *, void *))strcmp;
  else
    comp = (int (*)(void *, void *))numcmp;

  wpqsort(lines, 0, nlines-1, comp);

  for(j=0; j<nlines; j++) {
    printf("%s", *(lines+j));
  }

  for(j=0; j<nlines; j++) {
    free(*(lines+j));
  }

  fclose(f);

  return 0;
}
