#include <stdio.h>

int main() {
    int number;
    int isPrime = 1; 
    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &number);
    
    if (number <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("%d là so nguyen to.\n", number);
    } else {
        printf("%d không là so nguyen to.\n", number);
    }
    
    return 0;
}
