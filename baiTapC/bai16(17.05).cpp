
#include<stdio.h>
int isPrime (int n){
	int i = 2;
	if (n < 2) {
        return 0; 
    }
    do{
    if (n % i == 0) {
//    	if(n == 2){
//    		return 1;
//		}
            return 0; 
        }
        i++;
    }
    while(i <= n - 1);
    return 1;
}
int main(){
	int n, i = 2;
	printf("Nhap N: ");
	scanf("%d", &n);
	do{
	if(isPrime(i) == 1){
			printf("%d ", i);
		}
	i++;
}
while(i <= n);
	printf("\n");
	return 0;
}
