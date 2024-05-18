#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap so thu nhat la: ");
	scanf("\n%d", &a);
	printf("Nhap so thu hai la: ");
	scanf("\n%d", &b);
		printf("\nCac so theo thu tu tang dan la: \n");
	for(int i = a; i <= b; i++){
	printf("%d\n", i);
	}
	return 0;
}
