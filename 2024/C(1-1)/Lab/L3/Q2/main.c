#include <stdio.h>

int main(void) {
  int n;
  do {
    scanf("%d", &n);
    printf("input: %d\n", n);
  } while (n != 0);
  printf("finish");
}