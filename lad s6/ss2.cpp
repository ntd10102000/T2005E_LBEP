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
	int s = 0, dem = 0;
	float tb;
	for(int i = 0; i< n;i++){
		if(a[i]%2!=0 && i %2 == 0){
			s = s + a[i];
			dem++;
		}
	}
	tb = (float)s/dem;
	printf("Trung binh cong cac so le la: %f", tb);
	
	return 0;
}
