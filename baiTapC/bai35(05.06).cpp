#include <stdio.h>;
int main(){
	int a, b, kq1, kq2, kq3;
	float kq4;
	printf("Nhap so A : ");
	scanf("%d", &a);
	printf("Nhap so B : ");
	scanf("%d", &b);
	kq1 = a + b ;
	kq2 = a - b ;
	kq3 = a * b ;
    kq4 = a / b ;	
	printf("\nKet qua phep tinh cong la: %d", kq1);
	printf("\nKet qua phep tinh tru la: %d", kq2);
	printf("\nKet qua phep tinh nhan la: %d", kq3);
	printf("\nKet qua phep tinh chia la: %f", kq4);
	return 0; 
	 
}

