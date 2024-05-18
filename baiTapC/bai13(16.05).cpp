#include <stdio.h>
int sum(int n){
	int S = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
		S += i;		
	}
}
return S;
}
int main(){
	int n;
	 printf("Xin moi nhap N: ");
	 scanf("%d", &n);
	 if(sum(n) == n){
	 	printf("So %d la so hoan hao: ", sum(n));
		}
	else{
			printf("So %d la so khong hoan hao: ", sum(n));
		}
	 return 0;
	
}
