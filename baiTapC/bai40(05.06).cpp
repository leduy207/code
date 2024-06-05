#include <stdio.h>
int main(){
int n, i;
printf("Xin moi nhap so: ");
scanf("%d", &n);
while (i * i <= n){
if (i * i == n) {
printf("%d la so chinh phuong", n);
return 0;
}
++i;
}
printf("%d khong phai la so chinh phuong", n);
return 0;
}
