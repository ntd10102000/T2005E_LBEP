#include <stdio.h>
#include <math.h>

int main(){
	int tienGui, soNamGui, s = 0;
	printf("Nhap so tien gui: ");
	scanf("%d", &tienGui);
	printf("Nhap so nam gui: ");
	scanf("%d", &soNamGui);
	for(int i = 0;i<soNamGui;i++){
		tienGui = tienGui + tienGui * 8 / 100; 
	}
	printf("%d", tienGui);
}
