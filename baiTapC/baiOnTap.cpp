#include <stdio.h>
int main(){
	int a, b;
	printf("\nNhap so thu nhat la: ");
	scanf("%d", &a);
	printf("\nNhap so thu hai la: ");
	scanf("%d", &b);
	if(a > b){
		printf("%d > %d", a, b);
	}
	else{
		printf("%d >%d", b, a);
	}
	return 0;
}
