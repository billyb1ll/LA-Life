#include <stdio.h>

int main(void) {
  int w, h;
  char c;
  scanf("%d %d %c", &w, &h, &c);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      printf("%c ", c);
    }
    printf("\n");
  }
  return 0;
}