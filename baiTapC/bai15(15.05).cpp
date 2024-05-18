#include <stdio.h>
int main(){
	int n, i, S = 0 ;
	printf("\nNhap mot so nguyen duong: ");
	scanf("%d", &n);
	for(i = 3; i <= n; i++){
		if(i % 3 == 0 || i % 5 == 0){
			S += i;
	    	printf("%d\n", i);
		}
	}
	printf("Tong cac so tu 1 den %d ma chia het cho 3 hoac 5 la: %d", n, S);
	return 0;
}
		
