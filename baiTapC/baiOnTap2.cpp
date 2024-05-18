#include <stdio.h>
int main (){
	int a, b, c, max;
	printf("Nhap so thu nhat la: ");
	scanf("%d", &a);
	printf("Nhap so thu hai la: ");
	scanf("%d", &b);
	printf("Nhap so thu ba la: ");
	scanf("%d", &c);
	if(a > b && a > c){
		printf("%d la so lon nhat", a);
	}
	else if(b > a && b > c){
		printf("%d la so lon nhat", b);
	}
	else if(c > a && c > b){
		printf("%d la so lon nhat", c);
	}
	return 0;
}
