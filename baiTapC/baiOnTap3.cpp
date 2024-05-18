#include <stdio.h>
int main(){
	int a;
	printf("Moi ban nhap so: ");
	scanf("%d", &a);
	if(a > 0){
		printf("%d > 0", a);
		printf("\nSo do la so duong ");
	}
	else{
		printf("%d < 0", a);
		printf("\nSo do la so am ");
	}
	return 0;
}
