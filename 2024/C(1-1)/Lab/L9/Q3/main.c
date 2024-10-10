#include <stdio.h>

void print_c(int n, char c) {
  for (int i = 0; i < n; i++) {
    printf("%c", c);
  }
}

int main(void) {
  char ch;
  int r, c;
  scanf("%d %d %c", &r, &c, &ch);
  for (int i = 0; i < r; i++) {
    print_c(c, ch);
    printf(r - i > 1 ? "\n" : "");
  }
  return 0;
}