#include <stdio.h>

int sum(int a, int b, int c) { return a + b + c; }

int main(void) {
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);

  int result = sum(x, y, z);

  printf("%d\n", result);

  return 0;
}