#include <stdio.h>

int main(void) {
  int n, isPrime;
  do {
    scanf("%d", &n);
  } while (n < 2 || n > 1000);

  for (int i = 2; i <= n; i++) {
    isPrime = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      printf("%d ", i);
    }
  }
  return 0;
}