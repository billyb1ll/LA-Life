#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20

void toggle_and_replace(char *input_string) {
  for (int i = 0; input_string[i] != '\0'; i++) {
    if (islower(input_string[i])) {
      input_string[i] = toupper(input_string[i]);
    } else if (isupper(input_string[i])) {
      input_string[i] = tolower(input_string[i]);
    } else if (input_string[i] == '_') {
      input_string[i] = ' ';
    } else if (input_string[i] == ' ') {
      input_string[i] = '_';
    } else {
      continue;
    }
  }
}

int main(void) {
  char str[MAX_LEN];
  fgets(str, MAX_LEN, stdin);

  char *pos; // Remove newline character
  if ((pos = strchr(str, '\n')) != NULL) {
    *pos = '\0';
  }

  toggle_and_replace(str);
  printf("%s\n", str);

  return 0;
}