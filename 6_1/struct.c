#include <stdio.h>

struct point {
  double x;
  double y;
};


int main() {
  /* this type {member1, member2} can only be used in initialize */
  struct point p1, p2 = {10, 20};
  p1.x = 100;
  p1.y = 200;
  printf("Point1: x: %f, y: %f\n", p1.x, p1.y);
  /* this is illegal */
  /* p2 = { 10, 20 }; */
  printf("Point2: x: %f, y: %f\n", p2.x, p2.y);
  return 0;
}
