#include <stdio.h>
int main(){
	int a, b, i;
	printf("Nhap so thu nhat la: ");
	scanf("\n%d", &a);
	printf("Nhap so thu hai la: ");
	scanf("\n%d", &b);
		printf("\nCac so chan giua hai so do la: \n");
		if(a < b){
	for( i = a; i <= b; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
}
	}
	else{
		for(i = b; i <= a; i++){
			if(i % 2 == 0){
			printf("%d\n", i);
		}
	}
}
	return 0;
}
