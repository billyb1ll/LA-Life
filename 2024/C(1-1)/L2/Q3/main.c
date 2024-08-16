#include <stdio.h>

int main(){
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 == n2) {
        if (n2 == n3) {
            printf("all the same\n");
        } else {
            printf("neither\n");
        }
    } else {
        if (n2 == n3 || n1 == n3) {
            printf("neither\n");
        } else {
            printf("all different\n");
        }
    }
    
	//? and or way
	// if(n1 == n2 && n2 == n3){
	// 	printf("all the same");
	// }else if(n1 == n2 || n2 == n3 || n1 == n3){
	// 	printf("neither");
	// }else{
	// 	printf("all different");
	// }

	//! Another way
	// printf("all the same"? n1 == n2 && n2 == n3 : "all different"? n1 != n2 && n2 != n3 && n1 != n3 : "neither");

}