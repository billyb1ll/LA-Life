#include <stdio.h>

int main(void) {
  int start, end;
  scanf("%d %d", &start, &end);
  for (int i = start; i <= end; i++) {
    printf("%d%s", i, (i < end) ? "," : "");
  }
  return 0;
}