
#include<stdio.h>
int isPrime (int n){
	if (n < 2) {
        return 0; 
    }
    do{
	int i = 2;
	i++ ;
    if (n % i == 0) {
            return 0; 
        }
    }
    while(i < n - 1);
    return 1;
}
int main(){
	int n;
	printf("Nhap N: ");
	scanf("%d", &n);
	do{
	int i = 2;
	i++;
	if(isPrime(i) == 1){
			printf("%d ", i);
		}
}
while(i <= n)
	printf("\n");
	return 0;
}
