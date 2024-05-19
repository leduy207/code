#include <stdio.h>
#include <conio.h>
  
int main()
{
    long num, temp, digit, sum = 0;
  
    printf("Nhap vao so bat ki: ");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }
    printf("\nTong cac chu so trong %ld = %ld", temp, sum);
    getch();
}
