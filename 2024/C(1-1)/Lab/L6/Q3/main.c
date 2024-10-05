#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  int sc;
  int find = 0;
  scanf("%d", &sc);
  for (int i = 0; i < n; i++) {
    if (num[i] == sc) {
      printf("%d", i);
      find = 1;
      break;
    }
  }

  if (!find) {
    printf("Not found");
  }
  return 0;
}