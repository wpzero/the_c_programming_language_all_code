#include <stdio.h>

int bsearch(int arr[], int val, int length);

int main() {
  int arr[] = { 1, 3, 5, 7, 8, 10, 12, 34 };
  printf("%d\n", bsearch(arr, 10, sizeof(arr) / sizeof(int)));
  return 0;
}


int bsearch(int *arr, int val,int length) {
  int high, low, mid;
  mid = low = 0;
  high = length -1;
  while(low <= high) {
    mid = (low + high) / 2;
    if(arr[mid] == val)
      return mid;
    else if(arr[mid] > val)
      high = mid - 1;
    else if(arr[mid] < val)
      low = mid + 1;
  }

  return -1;
}
