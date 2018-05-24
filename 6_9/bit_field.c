/* This is a example about bit-field */
/* bit-field can not &. cannot take address of bit-field ‘is_external’ */

/* JUST LIKE bit or and operation */
/* flags |= EXTERNAL | STATIC; */
/* flasg &= ~(EXTERNAL | STATIC); */

#include <stdio.h>

typedef struct flags {
  unsigned int is_keyword: 1;
  unsigned int is_static: 1;
  unsigned int is_external: 1;
} FLAG;

int main() {
  FLAG flag;
  flag.is_keyword = flag.is_static = 1;
  flag.is_external = 0;
  printf("is_keyword :%d\n", flag.is_keyword);
  printf("is_static: %d\n", flag.is_static);
  printf("is_external: %d\n", flag.is_external);
  printf("the size is %ld\n", sizeof(FLAG));
  return 0;
}
