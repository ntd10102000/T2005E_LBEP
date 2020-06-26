#include <stdio.h>

float average(int s[],int n){
	int t = 0;
	float tb;
	for(int i = 0; i< n;i++){
		t = t + s[i];
	}
	tb = (float)t/n;
	printf("Average: %0.1f", tb);
	return tb;
}

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
    average(a, n);
    
}

