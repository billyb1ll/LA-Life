// YOUR CODE HERE
#include <stdio.h>

int main(void) {
  int h;
  scanf("%d", &h);
  for (int i = 1; i < h * 2; i++) {
    for (int j = 1; j <= h; j++) {
      if ((j <= i && i <= h) || (i > h && j <= (h * 2) - i)) {
        printf("1 ");
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
  return 0;
}