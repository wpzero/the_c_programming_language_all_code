#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *buf = NULL;
  char *ptn;
  FILE *f;
  int i, pn, exp, c;
  i = pn = exp = c = 0;
  size_t n;
  n = 0;

  /* [] binds higher that * */
  while(--argc > 0 && (*++argv)[0]=='-') {
    while(c = *++argv[0]) {
      switch (c) {
      case 'n': {
        pn = 1;
        break;
      }
      case 'x': {
        exp = 1;
        break;
      }
      default:
        break;
      }
    }
  }

  if(argc < 1) {
    printf("Usage example: grep -xn ptn filename\n");
    return 1;
  }

  ptn = *argv;

  if(argc == 1) {
    f = stdin;
  } else {
    f = fopen(*++argv, "r");
    if(!f) {
      ferror(f);
      clearerr(f);
    }
  }

  while(getline(&buf, &n, f) != -1) {
    if((strstr(buf, ptn) != NULL) != exp) {
      if(pn)
        printf("%d ", i+1);
      printf("%s", buf);
      free(buf);
      buf = NULL;
      i++;
    }
  }

  if(!feof(f)) {
    ferror(f);
    return 1;
  } else
    fclose(f);

  return 0;
}
