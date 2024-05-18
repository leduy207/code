#include <stdio.h>;
int main(){
	int a, b, kq1, kq2, kq3, kq4;
	
	printf("Nhap so A B: ");
	scanf("\n%d%d", &a, &b);
	kq1 = a + b ;
	kq2 = a - b ;
	kq3 = a * b ;
    kq4 = a / b ;
	//In ket qua ra man hinh
	printf("\nKet qua phep tinh cong la: %d", kq1);
	printf("\nKet qua phep tinh tru la: %d", kq2);
	printf("\nKet qua phep tinh nhan la: %d", kq3);
	printf("\nKet qua phep tinh chia la: %d", kq4);
	return 0; 
	 
}

 
