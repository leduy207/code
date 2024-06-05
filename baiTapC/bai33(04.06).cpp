#include <stdio.h>
int main(){
	int n, i;
	printf("Xin moi nhap so: ");
	scanf("%d", &n);
	for(i = 0; i <= n * n; i++){
		printf("\nBang cuu chuong %d", n);
	}
	return 0;
}
