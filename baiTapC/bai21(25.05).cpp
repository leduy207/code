#include <stdio.h>
int main(){
	int n, x, i, j, count = 0;
	printf("Nhap so luong phan tu ma ban muon: ");
	scanf("%d", &n);
	int arr[n];
	for(j = 0; j <= n - 1; j++){
		printf("Phan tu thu %d: ", j + 1);
		scanf("%d", &arr[j]);
	}
	printf("Nhap phan tu ban muon tim kiem: ");
	scanf("%d", &x);
	for(i = 0; i < n; i++){
		if(arr[i] == x){
	 count++;
}
	}
	printf("So %d duoc lap lai %d lan", x, count);
	return 0;
}
