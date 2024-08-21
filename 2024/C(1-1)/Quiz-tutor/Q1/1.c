#include <stdio.h>

int main(void) {
  char product_type;
  float price, discount;
  int quantity;
  scanf("%c %d", &product_type, &quantity);

  if (product_type == 'A') {
    price = 500 * quantity;
  } else if (product_type == 'B') {
    price = 99.5 * quantity;
  } else if (product_type == 'C') {
    price = 1499 * quantity;
  } else if (product_type == 'D') {
    price = 1000 * quantity;
  } else {
    price = 0;
  }

  if (price >= 2000) {
    discount = 0.2 * price;
  } else {
    discount = 0.05 * price;
  }

  printf("price : %.2f\n", price);
  printf("Discount : %.2f\n", discount);
  printf("Total : %.2f\n", price - discount);
}