#include <stdio.h>

int main() {
    int i, a, b;
    int n = 1; 
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &a);
    for(i = 2; i <= a; i++){
    	for(b = 2; b <= i - 1; b++){
    		if(i % b == 0){
    			n = 0;
		}
	}
		if(n == 1){
			printf("%d\n", i);
		}
		n = 1;
	}
    return 0;
}


