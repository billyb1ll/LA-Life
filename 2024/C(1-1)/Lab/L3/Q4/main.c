#include <stdio.h>

int main(void) {
  char input;
  int n = 0, sum = 0, count = 0;
  do {
    scanf("%c", &input);
    if (input >= '0' && input <= '9') {

      n = input - '0';
      if (n % 2 != 0) {
		count++;
        sum += n;
      }
    }
  } while (input != 'q');
  printf("%d:%d",count, sum);
  return 0;
}