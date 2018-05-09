#include <stdio.h>
#define MAXBUFF 1000

char buff[MAXBUFF];
int pos;

char getch();
void ungetch(int c);
