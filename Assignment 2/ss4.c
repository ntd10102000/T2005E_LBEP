#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, s = 0, p = 0, p1 = 0;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	
	p = a + b + c;
	p1 = p/2;
	s = sqrt(p1*(p1-a)*(p1-b)*(p1-b));
	
	if(a+b>c){
		printf("a, b, c tao thanh tam giac\n");
		printf("Chu vi: %f\n", p);
		printf("Dien tich: %f", s);
	}else if(a+c>b){
		printf("a, b, c tao thanh tam giac\n");
		printf("Chu vi: %f\n", p);
		printf("Dien tich: %f", s);
	}else if(b+c>a){
		printf("a, b, c tao thanh tam giac\n");
		printf("Chu vi: %f\n", p);
		printf("Dien tich: %f", s);
	}
	else
		printf("a, b, c k tao thanh tam giac");
	
}
