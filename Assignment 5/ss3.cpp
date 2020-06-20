#include <stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	int a[n];
	for(i = 0;i<n;i++){
		printf("Nhap gia tri thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	int c = 0, x = 0;
	for(int i = 0;i<n;i++){
		if(a[i]>0){
			c++;
			if(c>x){
				x =  c;
			}else{
				c = 0
			}
		}
	}
	printf("So luong so duong nhieu nhat la: %d", x);
}
