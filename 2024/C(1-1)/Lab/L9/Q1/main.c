#include <math.h>
#include <stdio.h>

float math_func(float a, float b) { return pow(a, 2) - (2 * a * b) - 42; }
int main() {
  float a, b;
  scanf("%f %f", &a, &b);
  printf("%.2f", math_func(a, b));
  return 0;
}