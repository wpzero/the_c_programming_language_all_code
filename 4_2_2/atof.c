#include <stdio.h>
#include <ctype.h>

double atof(char *str);

int main() {
  char str[] = "-134.11e4";
  printf("the result is %f", atof(str));
  return 0;
}

double atof(char *str) {
  double r;
  int i, j, power, sci, sig, scisig;
  r = 0.0;
  i = sci = j = 0;
  sig = power = scisig = 1;

  while(isspace(str[i]))
    i++;

  if(str[i] == '-') {
    sig = -1;
    i++;
  }

  for(;str[i] != '\0' && str[i] != '.' && str[i] != 'e'; i++)
    r = r*10 + (str[i]-'0');

  if(str[i] == '.') {
    i++;
    for(;str[i] != 'e' && str[i] != '\0'; i++) {
      r = r*10 + (str[i]-'0');
      power *= 10;
    }
  }
  r = r/power;

  if(str[i] == 'e') {
    i++;
    if(str[i] == '-') {
      i++;
      scisig = -1;
    }
    for(;str[i] != '\0'; i++) {
      sci = sci*10 + (str[i]-'0');
    }
  }

  for(j = 0; j < sci; j++) {
    if(scisig == 1) {
      r *= 10;
    } else {
      r /= 10;
    }
  }

  return r*sig;
}
