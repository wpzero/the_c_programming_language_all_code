#include "atof.h"

double atof(char *str) {
  double r;
  int i, j, power, sign;
  r = 0;
  i = j = power = 0;
  while(isspace(str[i]))
    i++;
  sign = (str[i] == '-') ? -1 : 1;
  if(str[i] == '-')
    i++;
  while(isdigit(str[i])) {
    r = r*10.0 + (str[i] - '0');
    i++;
  }
  if(str[i] == '.')
    i++;
  for(power = 1; isdigit(str[i]); i++) {
    r = r*10 + (str[i] - '0');
    power *= 10;
  }
  r = (sign*r)/power;
  return r;
}

int isnum(char *str) {
  int r, i;
  r = i= strlen(str);
  while(i>0) {
    if(!isdigit(str[--i]))
      r = 0;
  }
  return r;
}
