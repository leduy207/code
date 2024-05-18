#include <stdio.h>
int main(){
	float a, b;
	printf("\nNhap he so a:");
	scanf("\n%f", &a);
	printf("\nNhap he so b:");
	scanf("\n%f", &b);
	if(a == 0){
		if(b == 0){
			printf("\nPhuong trinh co nghiem dung voi moi x thuoc R");
		}
		else{
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else{
		printf("\nPhuong trinh co nghiem duy nhat la: %f ", -b/a);
		
	}
	return 0;
}
