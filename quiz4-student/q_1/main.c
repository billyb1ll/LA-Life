#include <math.h>
#include <stdio.h>

int bit_at_nth(int x, int n);
int num_bits(int x);

// TODO: 1
// Add the function prototype here
int partity_bit(int x);
// END TODO 1

int main() {
  printf("[DEBUG]: main(...)\n");
  int x;
  printf("Input a number: ");
  scanf("%d", &x);
  if (x <= 0) {
    printf("Invalid input.\n");
  } else {
    int partity = partity_bit(x);
    if (partity == 1) {
      printf("Odd Parity\n");
    } else if (partity == 0) {
      printf("Even Parity\n");
    } else {
      printf("Invalid parity check\n");
    }
  }
  return 0;
}

int partity_bit(int x) {
  printf("[DEBUG]: parity_bit(...)\n");
  int sum = 0;
  int bits = num_bits(x);
  for (int i = 0; i < bits; i++) {
    sum += bit_at_nth(x, i);
  }
  return sum % 2;
}

int bit_at_nth(int x, int n) {
  printf("[DEBUG]: bit_at_nth(...)\n");
  int k;
  for (int c = 0; c <= n; c++) {
    k = x >> c;
  }
  if (k & 1) {
    return 1;
  } else {
    return 0;
  }
}

int num_bits(int x) {
  printf("[DEBUG]: num_bits(...)\n");
  return ((int)floor(log2(x))) + 1;
}

// TODO: 2
// Add the function definition here

// END TODO 2