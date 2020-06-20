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
	int count = 0;
	for(int i = 0; i<n ; i++){
		if(a[i] < 2){
   	  	    continue;
		}
    	for(int i = 2; i <= a[i]/2; i++){
       	 	if(a[i] % i == 0){
            	count++;
            	break;
        	}
    	}
    	if(count == 0){
        	printf("%d\t", a[i]);
    	}
    }
    
	
}
