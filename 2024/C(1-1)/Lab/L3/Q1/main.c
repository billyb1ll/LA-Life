#include <stdio.h>

int main(void) {
  int start, end;
  scanf("%d %d", &start, &end);
  for (int i = start; i <= end; i++) {
    if (i % 3 != 0) {
      printf("%d", i);
      if (i < end) {
        printf(",");
      }
    }
  }
  return 0;
}