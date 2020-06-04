#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	if(a>b){
		if(a>c)
			printf("a la max");
		else 
			printf("c la max");
	}else{
		if(b>c)
			printf("b la max");
		else
			printf("c la max");
	}
}
