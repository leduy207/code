#include <stdio.h>
int main(){
	int n, i;
	i = 2;
		printf("Xin moi nhap so: ");
		scanf("%d", &n);
	do{
		if(n < 2){
				printf("Ban da nhap sai. Vui long nhap lai.");
        i = 2;
		i++;
	}
		printf("\nSo ban vua nhap la so nguyen to");
	}
while(i < n - 1);
return 0;
}


