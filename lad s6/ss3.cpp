#include <stdio.h>

int main(){
	int n;
	int a[n];
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	int x;
	int dem = 0;
	printf("\nNhap phan tu x: ");
	scanf("%d", &x);
	for(int i = 0; i< n;i++){
		if(x == a[i]){
			dem++;
		}	
	}
	if(dem==0){
		printf("\nx k nam trong mang");	
	}else{
		printf("\nx nam trong mang");
	}
	
	return 0;
}
