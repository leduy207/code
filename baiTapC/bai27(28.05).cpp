#include <stdio.h>
bool isPrime(int n){
	int i;
		if (n < 2) {
        return false; 
    }
    for(i = 2; i <= n/2; i++){
    	if(n % i == 0){
    		if(n == 2){
    			return true;
			}
			return false;
		}
	}
	return true;
}
int main(){
	int i, n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++){
			if(isPrime(a[i])){
			printf("\nSo nguyen to co trong mang la: %d ", a[i]);
		}
	}
	return 0;
}
