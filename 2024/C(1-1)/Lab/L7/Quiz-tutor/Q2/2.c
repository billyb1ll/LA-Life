#include <stdio.h>

int main(void) {
  int n;
  do {
    scanf("%d", &n);
  } while (n <= 0 || n > 26);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (n - i < j && j <= n) {
        printf("%c ", i + 'A'-1);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}