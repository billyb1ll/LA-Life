#include <stdio.h>

int main(){
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1 == n2 && n2 == n3){
		printf("all the same");
	}else if(n1 == n2 || n2 == n3 || n1 == n3){
		printf("neither");
	}else{
		printf("all different");
	}
}