#include <stdio.h>
int main(){
	int n, i, j, temp;
	printf("Xin moi nguoi dung nhap phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);
   }
   	for(i = 0; i < n - 1; i++){
   		for(j = i + 1; j < n; j++){
   		if(arr[i] < arr[j]){
   			temp = arr[i];
   			arr[i] = arr[j];
   			arr[j] = temp;
		   }
}
}
printf("Phan tu sau khi duoc sap xep la: ");
for(i = 0; i < n; i++){
	printf("%d", arr[i]);
}
return 0;

}


