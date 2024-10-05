#include <stdio.h>

void printColumn(int i, int j, int n) {
  if (j > 2 * n) {
    printf("\n");
    return;
  }
  if ((i != n + 1 && (j == i || j == 2 * n - i + 1)) ||
      (i == n + 1 && j == n + 1)) {
    printf("* ");
  } else {
    printf(" ");
  }
  printColumn(i, j + 1, n);
}

void printRow(int i, int n) {
  if (i > n + 1) {
    return;
  }
  printColumn(i, 1, n);
  printRow(i + 1, n);
}

int main(void) {
  int n;
  scanf("%d", &n);
  printRow(1, n);
  return 0;
}