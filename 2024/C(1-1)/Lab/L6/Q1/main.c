#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");
  for (int i = n - 1; i >= 0; i--) {
    printf("%d ", num[i]);
  }
  return 0;
}