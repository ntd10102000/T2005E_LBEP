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
	int x;
	for(i=n-1;i>=0;i--){
		if(a[i]%2!=0){
			x = a[i];
			printf("So le cuoi cung cua mang la: %d", x);
			break;
		}
	}
}
