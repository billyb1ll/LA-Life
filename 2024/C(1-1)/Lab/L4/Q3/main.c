#include <stdio.h>

int main(void) {
  const int correct_number = 42;
  const int max_attempts = 5;
  int guess, attempts = 0;

  while (attempts < max_attempts) {
    scanf("%d", &guess);
    attempts++;

    if (guess == correct_number) {
      printf("You WIN :)");
      return 0;
    } else if (guess < correct_number) {
      printf("too low\n");
    } else {
      printf("too high\n");
    }
  }

  printf("You LOSE :(");
  return 0;
}