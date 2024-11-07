#include <stdio.h>
#include <string.h>

void sort_strings(char str1[], char str2[], char str3[]) {
  char temp[10]; // Temp

  //swap str1 and str2
  if (strcmp(str1, str2) > 0) {
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
  }

  //swap str2 and str3
  if (strcmp(str2, str3) > 0) {
    strcpy(temp, str2);
    strcpy(str2, str3);
    strcpy(str3, temp);
  }

  // swap str1 and str2
  if (strcmp(str1, str2) > 0) {
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
  }
}

int main(void) {
  char str1[10];
  char str2[10];
  char str3[10];

  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%s", str3);

  sort_strings(str1, str2, str3);

  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%s", str3);

  return 0;
}