#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, win = 0;

  while (1) {
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 + n2 + n3 + n4 == 42) {
      win++;
      printf("You win!\n");
    } else {
      printf("You lose!\n");
      break;
    }
  }

  printf("Number of wins: %d", win);

  return 0;
}