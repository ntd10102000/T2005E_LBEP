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
	int max;
	for(int i; i<n;i++){
		if(a[i]<max){
			max = a[i];
			break;
		}
	}
	if(max == x){
		printf("khong co so nao nho hon %d", x);
	}else{
		for(int i =0;i<n;i++){
			if(a[i]>max&&a[i]<x){
				max  = a[i];
			}
		}printf("so tiem can lon nhat la: %d", max);
	}
	
	
	
	
	
	
	
	
	
	
	
}	
