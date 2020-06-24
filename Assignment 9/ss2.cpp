#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	
	printf("Nhap vao chuoi ky tu: ");
	scanf("%s", str);
	printf("Ky tu da nhap: %s", str);
	int dem = 0;
	for(int i = 0; i<strlen(str);i++){
		if(str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==117||str[i]==97||str[i]==101||str[i]==105||str[i]==111){
			dem++;
		}
	}
	
	printf("\nSo luong nguyen am co trong chuoi la: %d", dem);
	printf("\nSo luong ky tu con lai la: %d", strlen(str)-dem);
}
