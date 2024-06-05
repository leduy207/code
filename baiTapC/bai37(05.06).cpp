#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Vui long chon so tu 1 den 12: ");
		scanf("%d", &n);
	}
	while(n<1 || n > 12);
	
	switch(n){
		case 1:
			{
				printf("\nThang mot");
				break;
			}
		case 2:
			{
				printf("\nThang hai");
				break;
			}
		case 3:
			{
				printf("\nThang ba");
				break;
			}
		case 4:
			{
				printf("\nThang tu");
				break;
			}
		case 5:
			{
				printf("\nThang nam");
				break;
			}
		case 6:
			{
				printf("\nThang sau");
				break;
			}
		case 7:
			{
				printf("\nThang bay");
				break;
			}
		case 8:
			{
				printf("\nThang tam");
				break;
         	}
		case 9:
			{
				printf("\nThang chin");
				break;
            }
    	case 10:
			{
				printf("\nThang muoi");
				break;
		    }
		case 11:
			{
				printf("\nThang muoi mot");
				break;
			}
		case 12:
			{
				printf("\nThang muoi hai");
				break;	
		    }
		}
		return 0;
	}
				
				
				
				
				
				
				
				
