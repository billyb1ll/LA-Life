#include <stdio.h>

#define RMBTOTHB 4.70
#define THBTORMB 0.21

char x; // for currency
void input_type() {
  scanf(" %c", &x);
}

int main() {
  input_type();
  if (x == 'r' || x == 'R') {
    float x;
    scanf("%f", &x);
    printf("Converted amount: %.2f RMB\n", x * THBTORMB);
  } else if (x == 't' || x == 'T') {
    float x;
    scanf("%f", &x);
    printf("Converted amount: %.2f THB\n", x * RMBTOTHB);
  } else {
    printf("Invalid conversion type.\n");
  }
  return 0;
}