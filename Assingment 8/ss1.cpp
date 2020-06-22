#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	p = (int*)malloc(n*sizeof(int));
//	p = (int*)calloc(5,sizeof(int));
	for(int i =0; i<n;i++){
		printf("Nhap pahn tu thu %d: ", i+1);
		scanf("%d", p+i);
	}
	int c = 0, x = 0;
	for(int i = 0;i<n;i++){
		if(*(p+i)>0){
			c++;
			if(c>x){
				x =  c;
			}else{
				c = 0;
			}
		}
	}
	printf("So luong so duong nhieu nhat la: %d", x);
	free(p);
}
