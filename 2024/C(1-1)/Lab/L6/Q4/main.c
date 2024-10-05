#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int num1[n];
  int num2[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &num1[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &num2[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += num1[i] * num2[i];
  }
  printf("%d", sum);
  return 0;
}