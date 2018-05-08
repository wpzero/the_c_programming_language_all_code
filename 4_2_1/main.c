#include "atof.h"
#include "gtline.h"

#define MAXLN 1000

int main() {
  char line[MAXLN];
  double sum = 0.0;
  while((gtline(line, MAXLN)) > 0) {
      sum += atof(line);
  }
  printf("the result is %d\n", (int) sum);
  printf("the result is %lf\n", sum);
  return 0;
}
