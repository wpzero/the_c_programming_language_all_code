#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define NKEYS (sizeof(keytab)/sizeof(keytab[0]))
#define MAXWORD 100

struct key {
  char *word;
  int count;
} keytab[] = {
  "auto", 0,
  "break", 0,
  "case", 0,
  "for", 0,
  "if", 0,
  "void", 0,
  "while", 0
};

int getword(char *word, int lim);
int binsearch(char *word, struct key *tab, int n);

int main() {
  int n = 0;
  char word[MAXWORD];
  while(getword(word, MAXWORD) != EOF)
    if(isalpha(word[0]))
      if((n = binsearch(word, keytab, NKEYS)) > -1)
        keytab[n].count++;
  for(n=0; n<NKEYS; n++)
    printf("%s: %d\n", (keytab+n)->word, (keytab+n)->count);
  return 1;
}

int getword(char *word, int lim) {
  int c;
  while(isspace(c = getchar()))
    ;
  if(c != EOF)
    *word++ = c;
  if(!isalpha(c)) {
    *word = '\0';
    return c;
  }
  for(; --lim > 0; word++)
    if(!isalnum(*word = getchar())) {
      ungetc(*word, stdin);
      break;
    }
  *word = '\0';
  return word[0];
}

int binsearch(char *word, struct key *tab, int n) {
  int cond;
  int low, high, mid;
  low = 0;
  high = n-1;
  while(low <= high) {
    mid = (low + high)/2;
    if((cond=strcmp(tab[mid].word, word)) > 0)
      high = mid-1;
    else if(cond < 0)
      low = mid+1;
    else
      return mid;
  }
  return -1;
}
