#include <stdio.h>
int main(){
   int n, i, mot, hai;
   printf("Nhap so luong phan tu: ");
   scanf("%d", &n);
   int a[n];
   for(i = 0; i < n; i++){
   	printf("Phan tu thu %d: ", i + 1);
   	scanf("%d", &a[i]);
   }
   if(a[0] > a[1]) {
      mot = a[0];
      hai  = a[1];
   }else {
      mot = a[1];
      hai  = a[0];
   }
   for(i = 2; i < n; i++) {
      if( mot < a[i] ) {
         hai = mot;
         mot = a[i];
      }else if( hai < a[i] ) {
         hai =  a[i];
      }
   }

   printf("\nPhan tu lon thu hai la: %d \n", hai);   

   return 0;
}
