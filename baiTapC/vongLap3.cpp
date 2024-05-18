#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap so thu nhat la: ");
	scanf("\n%d", &a);
	printf("Nhap so thu hai la: ");
	scanf("\n%d", &b);
	printf("\nCac so theo thu tu giam dan la: \n ");
	for(int i = a; i >= b; i--){
		printf("\n%d", i);
	}
	return 0;
}
