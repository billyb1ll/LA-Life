#include <stdio.h>

int x = 5;
int b = 5;

void foo() { x = 97; }

void bar() {
  int b = 3;
  b = b - 1;
  x = x - 2;
}

int main() {
  x = 65;
  foo();
  for (int t = 10; t >= 0; t = t - 2) {
    x = x + 1;
    bar();
  }
  printf("Answer: %d", x - b);
  return 0;
}
