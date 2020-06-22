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
	int s = 0;
	int max = 0;
	for(int i = 0;i<n;i++){
		if(*(p+i)>0){
				s = s + *(p+i);
				if(s>max){
					max = s;
				}					
			}else{
				s = 0;
			}
		}
	
	printf("Tong so duong lon nhat trong chuoi: %d", s);
	free(p);
}
