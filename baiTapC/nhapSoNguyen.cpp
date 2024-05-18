#include <stdio.h>
int main(){
	int soNguyen;
	printf("Xin moi ban nhap so nguyen: ");
	scanf("\n%d", &soNguyen);
	if(soNguyen > 100 && soNguyen <1000){
		printf("\nSo ban vua nhap la %d, lon hon 100 va nho hon 1000", soNguyen);
	}
	else if(soNguyen >1000){
		printf("\nSo ban vua nhap la %d, lon hon 1000", soNguyen);
	}
	else if(soNguyen == 100){
		printf("\nSo ban vua nhap la %d, bang 100", soNguyen);
	}
	else if(soNguyen == 1000){
		printf("\nSo ban vua nhap la %d, bang 1000", soNguyen);
	}
	else{
		printf("\nSo ban vua nhap la %d, nho hon 100", soNguyen);
	}
	return 0;
}
