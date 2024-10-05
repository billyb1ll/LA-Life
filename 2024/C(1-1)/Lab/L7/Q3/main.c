#include <stdio.h>

int main(void) {
  int r, c;
  scanf("%d %d", &r, &c);
  int a[r][c], sum;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < c; i++) {
    sum = 0;
    for (int j = 0; j < r; j++) {
      sum += a[j][i];
    }
    printf("%d ", sum);
  }

  return 0;
}