#include <stdio.h>
#include <limits.h>

int main() {
  char c = '\0';
  short si = 0;
  int i = 0;
  long li = 1L;
  float f = 0.1f;
  double d = 0.1l;
  printf("char size %ld\n", sizeof(c));
  printf("short int size: %ld\n", sizeof(si));
  printf("int size: %ld\n", sizeof(i));
  printf("long size: %ld\n", sizeof(li));
  printf("float size: %ld\n", sizeof(f));
  printf("double siez: %ld\n", sizeof(d));
  printf("Range of signed char is [%d, %d].\n", SCHAR_MIN, SCHAR_MAX);
  printf("Range of unsigned char is [%u, %u].\n", 0, UCHAR_MAX);
  printf("Range of char is [%d, %d].\n", CHAR_MIN, CHAR_MAX);

  printf("Range of signed short int is [%hd, %hd].\n", SHRT_MIN, SHRT_MAX);
  printf("Range of unsigned short int is [%hu, %hu].\n", 0, USHRT_MAX);

  printf("Range of signed int is [%d, %d].\n", INT_MIN, INT_MAX);
  printf("Range of unsigned int is [%u, %u].\n", 0, UINT_MAX);

  printf("Range of signed long int is [%ld, %ld].\n", LONG_MIN, LONG_MAX);
  printf("Range of unsigned long int is [%lu, %lu].\n", 0, ULONG_MAX);
  return 0;
}
