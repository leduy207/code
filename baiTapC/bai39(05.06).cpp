#include <stdio.h>
int main(){
	int n, i;
	printf("Xin moi nhap so luong phan tu: ");
	scanf("%d", &n);
	int a[n];
	for(i = 1; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
}
