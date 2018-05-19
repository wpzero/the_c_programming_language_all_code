/* struct is data type and pass by value not reference */
#include <stdio.h>

struct point {
  double x;
  double y;
};

struct rect {
  struct point p1;
  struct point p2;
};

int main() {
  struct rect screen = {{1, 2}, {3, 4}};
  struct rect screen1;
  printf("p1: {x: %f, y: %f}, {x: %f, y: %f}\n", screen.p1.x, screen.p1.y, screen.p2.x, screen.p2.y);
  screen1.p1.x = 4;
  screen1.p1.y = 4;
  screen1.p2.x = 6;
  screen1.p2.y = 6;
  printf("p1: {x: %f, y: %f}, {x: %f, y: %f}\n", screen1.p1.x, screen1.p1.y, screen1.p2.x, screen1.p2.y);
  return 0;
}
