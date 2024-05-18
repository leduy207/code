//Kiem tra xem 1 nam co phai la nam nhuan hay khong bang cau lenh if else
#include <stdio.h>
int main (){
	int year;
	scanf("%d", &year);
	if((year % 4 == 0 && year %100 != 0)||(year %400 == 0)){
    printf("Nam do la nam nhuan");
    scanf("%d", year);
	}
	else{
	printf("nam do la nam khong nhuan");
	scanf("%d", year);
	return 0;	
	}
}
