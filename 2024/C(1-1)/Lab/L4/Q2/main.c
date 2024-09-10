#include <stdio.h>


int main() {
  int n,result;
  scanf("%d", &n);
  result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  printf("%d", result);
}