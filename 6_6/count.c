#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXWORD 100

struct tnode {
  char *word;
  int count;
  struct tnode *left;
  struct tnode *right;
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);
struct tnode *talloc();
char *wpstrdup(char *);

int main() {
  struct tnode *root;
  char word[MAXWORD];
  while(getword(word, MAXWORD) != EOF)
    if(isalpha(word[0]))
      root = addtree(root, word);
  treeprint(root);
  return 0;
}

struct tnode *addtree(struct tnode *p, char *w) {
  int cond;

  if(p == NULL) {
    p = talloc();
    p->word = wpstrdup(w);
    p->count = 1;
    p->left = NULL;
    p->right = NULL;
  } else if((cond = strcmp(p->word, w)) == 0)
    p->count++;
  else if(cond < 0)
    p->left = addtree(p->left, w);
  else
    p->right = addtree(p->right, w);
  return p;
}

struct tnode *talloc() {
  return malloc(sizeof(struct tnode));
};

char *wpstrdup(char *s) {
  char *p;
  p = malloc(strlen(s)+1);
  if(p != NULL)
    strcpy(p, s);
  return p;
}

void treeprint(struct tnode *p) {
  if(p != NULL)
    printf("%s: %d\n", p->word, p->count);
  if(p->left != NULL)
    treeprint(p->left);
  if(p->right != NULL)
    treeprint(p->right);
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
