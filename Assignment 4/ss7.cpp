#include<stdio.h>  
#include<conio.h>  

int main(){
	int n, dem = 0, s = 0;
	float tb;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
		dem++;
		s=s+n;
	}while(n<1000);
	tb=(float)s/dem;
	printf("\nSo lan da nhap la: %d", dem);
	printf("\nTrung binh cua cac lan nhap la: %f", tb);
	
}
