#include<stdio.h>
int main(){
	int n, i;
	float avg = 0;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
		avg = avg + a[i];
	}
	printf("Gia tri trung binh la: %.2f", avg/n);
	return 0;
}

