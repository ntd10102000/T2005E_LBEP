#include <stdio.h>

int main(){
	int n;	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
		for(int j = 0; j<i;j++){
			for(int k = 0; k<i-j;k++){
				if(a[k]>a[k+1]){
					int tmp = a[k];
					a[k]= a[k+1];
					a[k+1] = tmp;
				}
			}
		}
	};
	
	printf("sau khi nhap xong:\n");
	for(int i =0 ; i<n;i++){
		printf("%d", a[i]);
	}
	
	
}
