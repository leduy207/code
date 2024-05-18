#include <stdio.h>
int main (){
	int a, b, c, max;
    printf("Xin moi nhap 3 so: ");
    scanf("%d%d%d", &a, &b, &c);
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
