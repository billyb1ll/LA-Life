#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[10];
  char str2[10];
  char str3[10];

  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%s", str3);

  if (strcmp(str1, str2) == 0 && strcmp(str2, str3) == 0) {
    printf("all the same");
  } else if (strcmp(str1, str2) != 0 && strcmp(str2, str3) != 0 &&
             strcmp(str1, str3) != 0) {
    printf("all different");
  } else {
    printf("neither");
  }

  return 0;
}