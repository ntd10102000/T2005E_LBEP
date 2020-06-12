#include <stdio.h>
#include <math.h>

int main(){
	int n, i, s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i=0;i<=n/2;i++){
		if(n%i==0){
			s = s + i;
		}
	}printf("%d", s);
}
