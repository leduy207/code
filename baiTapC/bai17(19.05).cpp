#include<stdio.h>
#include<math.h>
int main(){
  long temp, n;
  int count = 0;
  do
  {
    printf("\nNhap 1 so nguyen lon hon 0: ");
    scanf("%ld", &n);
    if(n <= 0)
    {
    }
  }while(n <= 0);
  temp = n;
  if(n == 0) count = 1;
  while(temp != 0)
  {
    count++;
    temp = temp / 10;
  }
  printf("\nSo ki tu cua %ld la: %d", n, count);
  return 0;
}
 
