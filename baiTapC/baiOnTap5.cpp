#include <stdio.h>
#include <math.h>
int main(){
	int i, n ,s = 0;
	printf("Nhap gia tri gioi han can nhap la: ");
	scanf("%d", &n);
	for(i = 1;i <= n; i++){
		s = s + pow(i, 2);  
	}
	printf("s=%d", s);
	return 0;
}
