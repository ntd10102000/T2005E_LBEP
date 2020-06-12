#include <stdio.h>

int main(){
	int a, b;
	int ucln;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}ucln = a;
	printf("Uoc chung lon nhat la: %d", ucln);
}
