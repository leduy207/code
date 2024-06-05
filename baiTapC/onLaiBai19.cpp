#include <stdio.h>
int Sum(int n, int a[]){
	int s;
  for(int i = 0; i < n; i++){
  	s = s + a[i];
  }
  return s;
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
printf("Tong cac phan tu trong mang la: %d", Sum(n, a));
return 0;
}
