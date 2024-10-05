#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n + 1; i++) {
    for (int j = 1; j <= 2 * n; j++) {
      if ((i != n + 1 && (j == i || j == 2 * n - i + 1)) ||
          (i == n + 1 && j == n + 1)) {
        printf("* ");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}