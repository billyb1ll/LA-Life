#include <stdio.h>

int main(){
	float input;
	float result;
	scanf("%f", &input);

	if(input < 25000){
		result = input * 0.1;
	}else{
		result = input * 0.15;
	}
	printf("%.2f", result);
}