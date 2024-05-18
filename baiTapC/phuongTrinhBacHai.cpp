#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c;
	float delta, x1, x2;
	printf("Nhap he so a b c :");
	scanf("\n%f%f%f", &a, &b, &c);
    	if(a == 0){
    		if(b == 0){
    		
    			if(c == 0){
    				printf("\nPhuong trinh co vo so nghiem");
				}
				else{
					printf("\nPhuong trinh vo nghiem");
				}
				
			}
			else{
				printf("\nPhuong trinh co nghiem la : %f", -c/b);
			}
			}
	else{
	delta = pow(b, 2) - 4*a*c;
	if(delta > 0){
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("\nPhuong trinh co nghiem phan biet la : x1=%.2f va x2=%.2f", x1, x2 );
	}
	else if(delta == 0){
		x1 = -b / (2 * a);
		printf("\nPhuong trinh co nghiem kep la : x1=x2=%f.2f", x1 );
	}
	else{
		printf("\nPhuong trinh vo nghiem");
	}
	}
	return 0;
}
