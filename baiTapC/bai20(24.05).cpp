#include <stdio.h>
int main() {
   int arr[10] = {1, 2, 3, 4, 5};
   int i, a, b;
   a = arr[0];
   b = arr[0];
   for(i = 1; i < 5; i++) {
      if( a < arr[i] ) 
         a = arr[i];
      if( b > arr[i] ) 
         b = arr[i];
   }
   printf("Phan tu lon nhat cua mang la: %d", a);   
   printf("\nPhan tu nho nhat trong mang la: %d", b);
   return 0;
}
