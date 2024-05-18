#include <stdio.h>
int main(){
	int i, j;
    printf("\nIn ra ban cuu chuong");
    for(i = 1; i <= 10;i++){
        printf("\nBANG NHAN %d\n",i);
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
}
