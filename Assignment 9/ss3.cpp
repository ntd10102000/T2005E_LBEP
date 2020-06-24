#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	char arr[n][50];
	for(int i = 0; i<n;i++){
		printf("NHap chuoi thu %d:\n", i+1);
		scanf("%s", arr[i]);
	}
	for(int i = 0;i<n;i++){
		for(int j = 0; j< n;j++){
			if(strcmp(arr[i], arr[j])){
				char tmp[50];
				strcpy(tmp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], tmp);
			}
		}
	}
	
	for(int i = 0;i<n;i++){
		printf("%s\n", arr[i]);
	}
	
}
