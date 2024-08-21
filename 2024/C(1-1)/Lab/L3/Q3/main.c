#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, win = 0;
  do {
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    if (n1 + n2 + n3 + n4 == 42) {
      win++;
      printf("You win!\n");
    } else {
      printf("You lose!\n");
      break;
    }
  } while (1);
  printf("Number of wins: %d", win);

  return 0;
}