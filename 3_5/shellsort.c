#include <stdio.h>

void shellsort(int *arr, int len);

int main() {
  int i;
  int arr[] = {98, 12, 34, 1, 2, 4, 88, 33, 77};
  shellsort(arr, sizeof(arr)/sizeof(int));
  for(i = 0; i < sizeof(arr)/sizeof(int); i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}

void shellsort(int *arr, int len) {
  int gap, i, j, tmp;
  for(gap = len >> 1; gap > 0; gap = gap >> 1) {
    for(i = gap; i < len; i++) {
      for(j = i - gap; j >= 0 && arr[j] > arr[j+gap]; j -= gap) {
        tmp = arr[j];
        arr[j] = arr[j+gap];
        arr[j + gap] = tmp;
      }
    }
  }
}
