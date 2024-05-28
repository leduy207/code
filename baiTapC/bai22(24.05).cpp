#include <stdio.h>
int main(){
	int n, i, j, temp;
	printf("Xin moi nguoi dung nhap phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for(j = 0; j < n; j++){
		printf("Phan tu thu %d ", j + 1);
		scanf("%d", &arr[j]);
   }
   	for(j = 0; j < n - 1; j++){
   		for(i = j + 1; i < n; i++){
   		if(arr[i] < arr[j]){
   			temp = arr[i];
   			arr[i] = arr[j];
   			arr[j] = temp;
		   }
}
}
printf("Phan tu sau khi duoc sap xep la: ");
for(j = 0; j < n; j++){
	printf("%d", arr[j]);
}
return 0;
}


