
#include<stdio.h>
int isPrime (int n){
	int i
	if (n < 2) {
        return 0; 
    }
    do{
	i = 2;
    if (n % i == 0) {
            return 0; 
        }
        i++;
    }
    while(i < n - 1);
    return 1;
}
int main(){
	int n, i;
	printf("Nhap N: ");
	scanf("%d", &n);
	do{
	i = 2;
	i++;
	if(isPrime(i) == 1){
			printf("%d ", i);
		}
}
while(i <= n);
	printf("\n");
	return 0;
}
