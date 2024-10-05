#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int print_control_x = n;
  int print_control_y = n;
  for (int out = 1; out <= n; out++) {
    for (int in = 1; in <= n * 2; in++) {
      if (in == print_control_x || in == print_control_y) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    print_control_x--;
    print_control_y++;
    printf("\n");
  }
  return 0;
}