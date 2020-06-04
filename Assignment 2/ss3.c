#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f, &c);
	
	if(a!=0){
		delta = b*b - 4*a*c;
		if(delta<0)
			printf("Phuong trinh vo nghiem");
		else if(delta == 0)
			printf("Phuong trinh co nghiem kep: x1 = x2 = %f", -b/2*a);
		else
			printf("Phuong trinh co nghiem x1 = %f, x2 = %f", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a);		
	}else{
		printf("Phuong trinh co nghiem x = %f", -c/b);
	}
	
}
