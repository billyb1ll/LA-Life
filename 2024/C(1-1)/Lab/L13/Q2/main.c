#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[11];
  char str2[11];
  char str3[11];

  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%s", str3);
  
  char all_strs[33];
  strcpy(all_strs, str1);
  strcat(all_strs, ",");
  strcat(all_strs, str2);
  strcat(all_strs, ",");
  strcat(all_strs, str3);

  printf("%s", all_strs);
  return 0;
}