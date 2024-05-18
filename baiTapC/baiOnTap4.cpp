#include <stdio.h>
int main(){
	 int a, b, temp;
	 printf("Nhap 2 so: ");
	 scanf("%d%d", &a, &b);
	 printf("\n2 so truoc khi hoan doi la: %d %d", a, b);
	 temp = a;
	 a = b;
	 b = temp;
	 printf("\nKet qua sau khi hoan doi la: %d %d", a, b);
	 return 0;
}
