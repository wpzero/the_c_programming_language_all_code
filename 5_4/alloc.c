/* This is a very simple memory allow and free realize
 * This is just stack type memory management
 * We must first alloc, and first free
 * This is just a practice about pointer and array
 */

#include <stdio.h>
#include <stdint.h>

#define BUFLEN 1000

static char buf[BUFLEN];

static char *pb = buf;

void afree(char *p) {
  if(p > buf && p < buf+BUFLEN)
    pb = p;
}

char *alloc(int len) {
  if(buf+BUFLEN-pb > len) {
    pb += len;
    return pb-len;
  } else {
    return NULL;
  }
}

int main() {
  char *str = alloc(10);
  char *str2 = alloc(10);
  str[0] = 'z';
  str[1] = 'k';
  str[2] = 'f';
  str[3] = '\0';
  str2[0] = 'w';
  str2[1] = 'p';
  str2[2] = '\0';
  printf("%s\n", str);
  printf("location is %lu\n", (uintptr_t)str);
  printf("%s\n", str2);
  printf("location is %lu\n", (uintptr_t)str2);
  return 0;
}
