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
struct key *binsearch(char *word, struct key *tab, int n);

int main() {
  struct key *pkey;
  int n = 0;
  char word[MAXWORD];
  while(getword(word, MAXWORD) != EOF)
    if(isalpha(word[0]))
      if((pkey = binsearch(word, keytab, NKEYS)) != NULL)
        pkey->count++;
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

struct key *binsearch(char *word, struct key *tab, int n) {
  int cond;
  struct key *low, *high, *mid;
  low = tab;
  high = tab+n-1;
  while(low <= high) {
    /* Canot use (high+low)/2 */
    /* Because high+low is pointless for pointer operation */
    mid = low+(high-low)/2;
    if((cond=strcmp(mid->word, word)) > 0)
      high = mid-1;
    else if(cond < 0)
      low = mid+1;
    else
      return mid;
  }
  return NULL;
}
