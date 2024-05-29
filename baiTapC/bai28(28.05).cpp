#include <stdio.h>
bool sum(int n){
	int s = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
		s += i;		
	}
}
if(s == n){
	return true;
}
return false;
}
int main(){
	int n, i;
	printf("Xin moi nhap phan tu: ");
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("Cac so hoan hao la: ");
	for(i = 0; i < n; i++){
    if(sum(a[i])){
	 	printf("%d ", a[i]);
		}
	}
	return 0;
}
