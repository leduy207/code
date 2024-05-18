#include <stdio.h>
int main(){
	int tuoi;
    char ten[50];
    printf("Xin moi nhap ho va ten cua ban: ");
    gets(ten);
    printf("Xin moi nhap so tuoi cua ban: ");
    scanf("%d", &tuoi);
    
    if(tuoi <= 18){
    	printf("\nXin chao %s ", &ten);
    	printf("\nBan chua du dieu kien hoc bang lai xe: ");
    	
	}    
	else{
		printf("\nXin chao %s ", &ten);
    	printf("\nBan da du dieu kien hoc bang lai xe: ");
    }
 
    return 0;
}

