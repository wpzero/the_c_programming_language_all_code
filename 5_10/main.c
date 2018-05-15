#include "lines.h"
#include "qsort.h"

#define MAXLINES 1000

char *lines[MAXLINES];

int main() {
  int nlines;
  nlines = readlines(lines, MAXLINES);
  wpqsort(lines, 0, nlines-1);
  writelines(lines, nlines);
  return 0;
}
