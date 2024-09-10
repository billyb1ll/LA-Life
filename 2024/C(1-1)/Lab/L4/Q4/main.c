#include <stdio.h>

int main(void) {
  int score;
  do {
    scanf("%d", &score);
    if (score < 0 || score > 100) {
      printf("invalid score\n");
    }
  } while (score < 0 || score > 100);

  if (score >= 70) {
    printf("Outstanding");
  } else if (score >= 50) {
    printf("Pass");
  } else {
    printf("Fail");
  }
  return 0;
}