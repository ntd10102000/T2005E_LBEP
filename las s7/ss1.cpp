#include <stdio.h>

int main(){
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	int s = 0;
	int max = 0;
	int dem = 0;
	
	while(n>0){
		s = n%10;
		n = n/10;
		if(s>max){
			max = s;
		}
	}
	printf("chu so lon nhat cua so nguyen duong la: %d", max);
}
