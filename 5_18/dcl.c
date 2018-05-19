/* dcl: */
/*     optional *'s direct-dcl */
/* direct-dcl */
/*     name */
/*     (dcl) */
/*     direct-dcl() */
/*     direct-dcl[optional size] */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN 100
enum { NAME, PARENS, BRACKETS };

void dcl(void);
void dirdcl(void);
int gettoken(void);

int tokentype; /* type of last token */
char token[MAXTOKEN]; /* last token string */
char name[MAXTOKEN]; /* identifier name */
char datatype[MAXTOKEN]; /* data type = char, int, etc. */
char out[1000];

int main() /* convert declaration to words */
{
  while (gettoken() != EOF) {
    /* 1st token on line */
    strcpy(datatype, token); /* is the datatype */
    out[0] = '\0';
    dcl();
    /* parse rest of line */
    if (tokentype != '\n')
      printf("syntax error\n");
    printf("%s: %s %s\n", name, out, datatype);
  }
  return 0;
}

void dcl(void) {
  int npt;
  npt = 0;
  while(gettoken() == '*')
    npt++;
  dirdcl();
  while(npt-- > 0)
    strcat(out, " pointer to");
}

void dirdcl(void) {
  int type;
  if(tokentype == '(') {
    dcl();
    if(tokentype != ')')
      printf("error: missing )\n");
  } else if(tokentype == NAME)
    strcpy(name, token);
  else
    printf("error: expected name or (dcl)\n");
  while((type=gettoken()) == PARENS || type == BRACKETS) {
    if(type == PARENS)
      strcat(out, " function returning");
    else {
      strcat(out, " array");
      strcat(out, token);
      strcat(out, " of");
    }
  }
}

int gettoken(void) /* return next token */ {
  int c;
  char *p = token;
  while ((c = getchar()) == ' ' || c == '\t')
    ;
  if (c == '(') {
    if ((c = getchar()) == ')') {
      strcpy(token, "()");
      return tokentype = PARENS;
    } else {
      ungetc(c, stdin);
      return tokentype = '(';
    }
  } else if (c == '[') {
    for (*p++ = c; (*p++ = getchar()) != ']'; )
      ;
    *p = '\0';
    return tokentype = BRACKETS;
  } else if (isalpha(c)) {
    for (*p++ = c; isalnum(c = getchar()); )
      *p++ = c;
    *p = '\0';
    ungetc(c, stdin);
    return tokentype = NAME;
} else
    return tokentype = c;
}
