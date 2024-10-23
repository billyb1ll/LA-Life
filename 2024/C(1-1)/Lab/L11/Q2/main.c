#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int *p_min;
  int *p_max;

  ////////////////// Start of your code //////////////////

  /*
      TODO:
        Point the pointers `p_min` and `p_max` to
        the minimum and the maximum values of the
        array `arr`.
  */
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      p_min = &arr[i];
      p_max = &arr[i];
    } else {
      if (arr[i] < *p_min) {
        p_min = &arr[i];
      }
      if (arr[i] > *p_max) {
        p_max = &arr[i];
      }
    }
  }

  ////////////////// End of your code //////////////////

  printf("%d %d", *p_max, *p_min);
  return 0;
}