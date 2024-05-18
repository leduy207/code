#include <stdio.h>
int main(){
	int a, b, i;
	printf("Nhap so thu nhat la: ");
	scanf("\n%d", &a);
	printf("Nhap so thu hai la: ");
	scanf("\n%d", &b);
	printf("\nDay so theo thu tu tang dan la:\n ");
	if(a < b){
		for(i = a; i <= b; i++){
			printf("%d\n", i);
		}
	}
	else{
			for(i = b; i <= a; i++){
				printf("%d\n", i);
	}

}
	return 0;
}

