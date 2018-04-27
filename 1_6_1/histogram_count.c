#include <stdio.h>

void printfHistogram(int);

int main() {
  int nwhite, nother, j, allCount;
  char c;
  int numbers[10];
  nwhite = nother = j = allCount =  0;
  for(j = 0; j < 10; j++) {
    numbers[j] = 0;
  }
  while((c = getchar()) != EOF) {
    if(c <= '9' && c >= '0') {
      ++numbers[c - '0'];
    } else if (c == '\t' || c == '\n' || c == ' ') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  allCount = nwhite + nother;
  for(j = 0; j < 10; j++) {
    allCount += numbers[j];
  }
  printf("%-20s", "white count:");
  if(allCount > 0) {
    printfHistogram(((float)nwhite/allCount) * 200);
  }
  printf("%-20s", "other count:");
  if(allCount > 0) {
    printfHistogram(((float)nother/allCount) * 200);
  }
  for(j = 0; j < 10; j++) {
    printf("%-20d", j);
    printfHistogram(((float)numbers[j]/allCount) * 200);
  }
  return 0;
}

void printfHistogram(int length) {
  int j;
  for(j = 0; j < length; j++) {
    printf("=");
  }
  printf("\n");
}
