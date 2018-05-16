#include <stdio.h>
#include <stdlib.h>

#define MAXLNS 10000

int main(int argc, char *argv[]) {
  FILE *f;
  char *lines[MAXLNS];
  int nlines, n;
  nlines = 0;
  n = 10;
  char *buf, c;
  buf = NULL;
  size_t blen = 0;

  while(--argc > 0 && (*++argv)[0]=='-') {
    while(c = *++argv[0]) {
      switch (c) {
      case 'n': {
        if(argc > 0) {
          argc--;
          n = atoi(*++argv);
        }
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

  while(getline(&buf, &blen, f) != -1) {
      *(lines+nlines) = buf;
      buf = NULL;
      nlines++;
  }

  if(!feof(f)) {
    ferror(f);
    return 1;
  }


  if(nlines < n)
    n = nlines;

  while(n>0) {
    printf("%s", *(lines+(nlines-n)));
    n--;
  }

  for(int j = 0; j < nlines; j++) {
    free(*(lines+j));
  }

  fclose(f);

  return 0;
}
