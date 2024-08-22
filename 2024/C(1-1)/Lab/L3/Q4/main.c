#include <stdio.h>

int main(void) {
  char input;
  int n = 0, sum = 0, count = 0;
  do {
    scanf("%c", &input);
    if (input >= '0' && input <= '9') {
      n = input - '0';
      count += (n % 2 != 0) ? 1 : 0;
      sum += (n % 2 != 0) ? n : 0;
    }
  } while (input != 'q');
  printf("%d:%d", count, sum);
  return 0;
}