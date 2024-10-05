#include <stdio.h>

int main(void) {
  int r, c;
  scanf("%d %d", &r, &c);
  int a[r][c], b[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  int sc, find = 0;
  scanf("%d", &sc);
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] == sc) {
        printf("[%d,%d] ", i, j);
        find = 1;
      }
    }
  }
  if (!find) {
    printf("Not found");
  }
  return 0;
}