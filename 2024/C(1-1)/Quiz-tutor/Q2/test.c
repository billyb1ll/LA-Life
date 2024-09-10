#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  for (int i = 1;i<=n;i++){
	for(int j = 1;j<=n;j++){
		printf("i = %d , j = %d\n",i,j);
	}
	printf("==========\n");
  }
  printf("!!!!!!!!!!!!");
  return 0;
}