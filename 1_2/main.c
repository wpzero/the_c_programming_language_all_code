#include <stdio.h>

#define LOWER 0
#define STEP 20
#define UPPER 300

int main() {
  float fahr, celsius;
  fahr = LOWER;
  while (fahr < UPPER) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr += STEP;
  }
  return 0;
}
