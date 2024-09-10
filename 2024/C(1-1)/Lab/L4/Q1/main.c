#include <stdio.h>

int main(void) {
  int start, end, step;
  scanf("%d %d %d", &start, &end, &step);
  for (int i = start; i <= end; i += step) {
    if (i <= end && i != start) {
      printf("-");
    }
    printf("%d", i);
  }
  return 0;
}