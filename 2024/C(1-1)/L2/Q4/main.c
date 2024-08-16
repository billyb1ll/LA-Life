#include <stdio.h>

int main(void) {
  float n1, n2;
  char op;

  scanf("%f %f %c", &n1, &n2, &op);
  //! Another way
  switch (op) {
    case '+':
      printf("%.2f", n1 + n2);
      break;
    case '-':
      printf("%.2f", n1 - n2);
      break;
    case '*':
      printf("%.2f", n1 * n2);
      break;
    case '/':
      printf("%.2f", n1 / n2);
      break;
  default:
    printf("Invalid operator");
  }

  //! Hard way
  // printf("%.2f", (op == '+') ? n1 + n2 : (op == '-') ? n1 - n2 : (op == '*') ? n1 * n2 : n1 / n2);
  return 0;
}