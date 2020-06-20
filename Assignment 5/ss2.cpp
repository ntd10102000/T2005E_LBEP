#include <stdio.h>

int main(){
	int n, i;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Nhap pahn tu thu %d: ", i +1);
		scanf("%d", &a[i]);
	}
	int x = a[0];
	for(i=0;i<n;i++){
		if(a[i]>0){
			if(x>a[i]){
				x = a[i];				
				break;
			}
		}
	}printf("So duong nho nhat la: %d", x);
}
