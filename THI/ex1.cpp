#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu :" );
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){ 
 		printf(" phan tu thu %d :",i);
     	scanf("%d",&a[i]);
    }
    printf("Enter numbers:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    int gtc;
    int dem = 0;
	
 	for(int i=0;i<n;i++){
 		if(a[i]%2==0){
		 	gtc=a[i];
		}else{
			dem++;
		} 
		 
 	}
 	if(dem<n){
 		printf("Last Even: ");
	 	printf("%d",gtc); 
	}else{
		printf("No EVEN number");
	}
	
 
 
}
