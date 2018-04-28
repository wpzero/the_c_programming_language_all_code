#include <stdio.h>
#include <string.h>

#define DEFAULTBLANKN 2
#define MAXBLANKLEN 10

int println(int);
int number(char *arg, int deft);
int power(int base, int e);

int main(int argc, char *argv[]) {
  int blankn;
  if(argc == 1) {
    blankn = DEFAULTBLANKN;
  } else {
    blankn = number(argv[1], DEFAULTBLANKN);
  }
  while(println(blankn) > 0)
    ;
  return 0;
}

int println(int blankn) {
  int j, i;
  j = i = 0;
  char c;
  while((c = getchar()) != EOF && c != '\n') {
    if(c == '\t') {
      for(i = 0; i < blankn; i++)
        printf("%c", ' ');
    } else {
      printf("%c", c);
    }
    ++j;
  }
  if(c == '\n') {
    ++j;
    printf("%c", c);
  }
  return j;
}

int number(char *arg, int deft) {
  char numbers[MAXBLANKLEN];
  int i, r, l;
  i = r = l = 0;
  if(strlen(arg) == 0) {
    return deft;
  }
  for(i = 0; i < MAXBLANKLEN && arg[i] <= '9' && arg[i] >= '0'; i++)
    numbers[i] = arg[i];
  numbers[i] = '\0';
  l = strlen(numbers);
  if(l == 0)
    return DEFAULTBLANKN;
  for(i = 0; i < l; i++) {
    r += (numbers[i] - '0') * power(10, l - i - 1);
  }
  return r;
}

int power(int base, int e) {
  int i, r;
  i = 0;
  r = 1;
  if(base == 0)
    return 0;
  if(e == 0)
    return 1;
  for(i = 0; i < e; ++i)
    r *= base;
  return r;
}
