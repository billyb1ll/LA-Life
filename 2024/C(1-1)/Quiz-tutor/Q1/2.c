#include <stdio.h>

int main() {

  int unit;
  float cost = 0;
  scanf("%d", &unit);

  if (unit <= 50) {
    cost = 2.5 * unit;
  } else if (unit >= 51 && unit <= 100) {
    cost = (2.5 * 50) + ((unit - 50) * 3);
  } else if (unit >= 101) {
    cost = (2.5 * 50) + (50 * 3) + ((unit - 100) * 3.5);
  }
  printf("%.2f", cost);
}