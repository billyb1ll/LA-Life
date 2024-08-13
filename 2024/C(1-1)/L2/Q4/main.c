#include <stdio.h>

int main(void)
{
	float n1, n2;
	char op;

	scanf("%f %f %c", &n1, &n2, &op);
	if(op == '+'){
		printf("%.2f", n1 + n2);
	}else if(op == '-'){
		printf("%.2f", n1 - n2);
	}else if(op == '*'){
		printf("%.2f", n1 * n2);
	}else if(op == '/'){
		printf("%.2f", n1 / n2);
	}else{
		printf("Invalid operator");
	}

	//! Another way
	printf("%.2f", op == '+' ? n1 + n2 : op == '-' ? n1 - n2 : op == '*' ? n1 * n2 : n1 / n2);
	return 0;
}