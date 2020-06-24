#include <stdio.h>

int main(){
	char str[50], kyTu;
	printf("Nhap vao chuoi ky tu: ");
	scanf("%s", str);
	printf("Ky tu da nhap: %s", str);
	printf("\nNhap ky tu can tim trong chuoi: ");
	scanf("%s", &kyTu);
	for(int i = 0; i<50;i++){
		if(str[i]>=0&&str[i]<128){
			if(kyTu==str[i]){
				printf("ký tu co trong chuoi da nhap");
				break;
			}
		}
	}
}
