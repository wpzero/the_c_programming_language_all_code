#include <stdio.h>

#define max(a, b) (a) < (b) ? (b) : (a)
#define min(a, b) (a) < (b) ? (a) : (b)

struct point {
  int x;
  int y;
};

struct rect {
  struct point p1;
  struct point p2;
};

struct point makepoint(int, int);

int ptinrect(struct point, struct rect);

int main() {
  int arr[] = {1, 10, 100};
  int *pint = arr;
  int *pint2 = pint;
  printf("the pint is %d\n", *pint++);
  printf("the pint is %d\n", *pint);
  printf("the pint2 is %d\n", (*pint2)++);
  printf("the pint2 is %d\n", *pint2);
  struct point p1 = makepoint(1, 1);
  struct point p2 = makepoint(4, 4);
  struct point middle = makepoint((p1.x+p2.x)/2, (p1.y+p2.y)/2);
  struct rect screen = {p1, p2};
  struct point *pp = &middle;
  printf("middle point x is %d, y is %d\n", pp->x, pp->y);
  if(ptinrect(middle, screen))
    printf("this point is in screen\n");
  else
    printf("this point is not in screen\n");
  return 0;
}

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

int ptinrect(struct point p, struct rect r) {
  return p.x <= max(r.p1.x, r.p2.x) && p.x >= min(r.p1.x, r.p2.x)
    && p.y <= max(r.p1.y, r.p2.y) && p.y >= min(r.p1.y, r.p2.y);
}
