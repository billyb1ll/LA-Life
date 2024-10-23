#include <stdio.h>

// please write your method here

void findmax(int *x, int *y, int *z, int *max) {
  if (*x > *y && *x > *z) {
    *max = *x;
  } else if (*y > *x && *y > *z) {
    *max = *y;
  } else {
    *max = *z;
  }
}

int main(void) {
  // do nothing in main()
  int n1, n2, n3, max = 0;
  scanf("%d %d %d", &n1, &n2, &n3);
  findmax(&n1, &n2, &n3, &max);
  printf("%d", max);
  return 0;
}
