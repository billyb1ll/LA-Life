#include <stdio.h>
#define MIN_VAL -4
#define MAX_VAL 42

int clip_value(int v) {
//   if (v < MIN_VAL) {
//     return MIN_VAL;
//   } else if (v > MAX_VAL) {
//     return MAX_VAL;
//   } else {
//     return v;
//   }

  return v < MIN_VAL ? MIN_VAL : v > MAX_VAL ? MAX_VAL : v;
}

int main(void) {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", clip_value(arr[i]));
  }
}