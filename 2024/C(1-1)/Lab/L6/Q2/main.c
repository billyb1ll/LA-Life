#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int num[n];

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	int max = num[0];
	int min = num[0];

	for (int i = 0; i < n; i++)
	{
		if(i % 2 == 0){
			if(num[i] > max){
				max = num[i];
			}
		}
		else{
			if(num[i] < min){
				min = num[i];
			}
		}
	}

	printf("%d %d", min,max); 
	return 0;
}