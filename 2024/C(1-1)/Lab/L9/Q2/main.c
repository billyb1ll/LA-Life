#include <stdio.h>

void print_c(int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", c);
	}
}

int main(void)
{
  char c;
  int n;
  scanf("%d %c", &n, &c);
  print_c(n, c);
  return 0;
}