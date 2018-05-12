#include <stdio.h>

void qsort(int *arr, int left, int right);
void swap(int *arr, int p1, int p2);

int main() {
  int arr1[] = {2,4,1,10,3,7,99};
  int arr2[] = {89,23,33,11};
  qsort(arr1, 0, sizeof(arr1)/sizeof(int)-1);
  qsort(arr2, 0, sizeof(arr2)/sizeof(int)-1);
  for(int i = 0; i < sizeof(arr1)/sizeof(int); i++) {
    printf("%d%c", arr1[i], i == sizeof(arr1)/sizeof(int)-1 ? '\n' : ',');
  }
  for(int i = 0; i < sizeof(arr2)/sizeof(int); i++) {
    printf("%d%c", arr2[i], i == sizeof(arr2)/sizeof(int)-1 ? '\n' : ',');
  }
  return 0;
}

void qsort(int *arr, int left, int right) {
  int pos, i;
  pos = i = 0;
  if(left >= right)
    return;
  /* 先把mid的值放到left, 然后分组[left+1, right]找到适当的pos */
  swap(arr, left, (left+right)/2);
  pos = left;
  for(i = left+1; i <= right; i++) {
    if(arr[i] < arr[left])
      swap(arr, ++pos, i);
  }
  /* pos是小于arr[left]的 */
  swap(arr, left, pos);
  /* 递归调用快排 */
  qsort(arr, left, pos-1);
  qsort(arr, pos+1, right);
}


void swap(int *arr, int p1, int p2) {
  int tmp = arr[p1];
  arr[p1] = arr[p2];
  arr[p2] = tmp;
}
