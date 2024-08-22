#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, win = 0;
  do {
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    win = (n1 + n2 + n3 + n4 == 42) ? win + 1 : win;
    printf((n1 + n2 + n3 + n4 == 42) ? "You win!\n" : "You lose!\n");
    if (n1 + n2 + n3 + n4 != 42) {
      break;
    }

  } while (1);
  printf("Number of wins: %d", win);

  return 0;
}