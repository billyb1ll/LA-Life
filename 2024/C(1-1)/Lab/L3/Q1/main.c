#include <stdio.h>

int main(void) {
  int start, end;
  scanf("%d %d", &start, &end);
  int first = 1; // 1 assume true, 0 assume false

  for (int i = start; i <= end; i++) {
    if (i % 3 != 0) {
      if (!first) {
        printf(",");
      }
      printf("%d", i);
      first = 0;
    }
  }

  return 0;
}