#include <stdio.h>
int main(){
	int a, b, i, caseNum;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	
	printf("\nXin moi nguoi dung chon so: ");
	printf("\n1. So chan\n");
	printf("\n2. So le\n");
	scanf("%d", &caseNum);
	printf("\n");
	switch(caseNum){
		case 1:
			{
				if(a < b){
					for(i = a; i <= b; i++){
						if(i % 2 == 0){
						printf("%d\n", i);
					}
					}
				}
				else{
					for(i = b; i <= a; i++){
						if(i % 2 == 0){
						printf("%d\n", i);	
					}
				}
			}
			break;
	}
	case 2:
		{
			if(a < b){
				for(i = a; i <= b; i++){
					if(i % 2 != 0){
					printf("%d\n", i);
				}
				}
			}
		else{
			for(i = b; i <= a; i++){
				if(i % 2 != 0){
					printf("%d\n", i);
				}
				}
		}
		break;
		}
	
}
return 0;
}
