#include <stdio.h>

int main(){
	int n;	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	printf("\nmang truoc khi d?c chuyenr: ");
	for(int i = 0;i<n;i++){
		printf("%d", &a[i]);
	}
	
	for(int i = 0;i<x;i++){
		//xoay vong so
		int tmp = a[n-1];
		for(int j = n-1;j>=1;j--){
			a[i]= a[j-1];
		}
		a[0]=tmp;
	}
	printf("\nMang sau khi dich chuyen: ");
		for(int i = 0;i<n;i++){
		printf("%d", &a[i]);
	}
}
