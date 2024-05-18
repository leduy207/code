#include <stdio.h>
int main(){
	int a, b, i, caseNum;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	
	printf("\nXin moi nguoi dung chon so: ");
	printf("\n1. Thu tu tang dan");
	printf("\n2. Thu tu giam dan\n");
	scanf("%d", &caseNum);
	printf("\n");
	switch(caseNum){
		case 1:
			{
				if(a < b){
					for(i = a; i <= b; i++){
						printf("%d\n", i);
					}
				}
				else{
					for(i = b; i <= a; i++){
						printf("%d\n", i);	
				}
			}
				break;
		
	}
	case 2:
		{
			if(b < a){
				for(i = a; i >= b; i--){
					printf("%d\n", i);
				}
			}
		else{
			for(i = b; i >= a; i--){
					printf("%d\n", i);
				}
		}
		}
		break;
}

return 0;
}
