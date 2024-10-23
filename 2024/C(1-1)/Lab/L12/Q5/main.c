#include <stdio.h>

// write the functions here
void swap(int *x, int *y);
void sort_values(int *x, int *y, int *z);

int main(void) {
  //------the code is given here---//
  int n1, n2, n3;
  scanf("%d %d %d", &n1, &n2, &n3);
  sort_values(&n1, &n2, &n3);
  printf("%d %d %d", n1, n2, n3);
  return 0;
}
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
void sort_values(int *x, int *y, int *z) {
  if (*x > *y) {
    swap(x, y);
  }
  if (*x > *z) {
    swap(x, z);
  }
  if (*y > *z) {
    swap(y, z);
  }
}