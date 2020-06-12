#include <stdio.h>

int main(){
	char n;
	printf("Nhap vao 1 trong cac ky tu y, Y, n, N: ");
	while(true){
		scanf("%c", &n);
		if(n == 'y'|| n == 'Y'|| n == 'n'|| n == 'N'){
			break;
		}else{
			printf("\nNhap lai: ");
		}	
	}
}
