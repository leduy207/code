#include <stdio.h>
int main(){
	int i, n, s = 0;
	printf("Gia tri gioi han can nhap la: ");
	scanf("%d", &n);
   for(i = 1; i <= n; i++){
   	s +=  i;
   }
   printf("s=%d", s);
   return 0;
}
