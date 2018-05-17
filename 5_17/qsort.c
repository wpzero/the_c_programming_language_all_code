#include "qsort.h"

void wpqsort(char *lines[], int left, int right, int (*comp)(void *, void *)) {
  int pos, i;
  pos = i = 0;
  if(left >= right)
    return;
  /* 先把mid的值放到left, 然后分组[left+1, right]找到适当的pos */
  swap(lines, left, (left+right)/2);
  pos = left;
  for(i = left+1; i <= right; i++) {
    if((*comp)(*(lines+i), *(lines+left))<0)
      swap(lines, ++pos, i);
  }
  /* pos是小于lines[left]的 */
  swap(lines, left, pos);
  /* 递归调用快排 */
  wpqsort(lines, left, pos-1, comp);
  wpqsort(lines, pos+1, right, comp);
}


void swap(char *lines[], int p1, int p2) {
  char* tmp = *(lines+p1);
  *(lines+p1) = *(lines+p2);
  *(lines+p2) = tmp;
}
