#include <stdio.h>
#include <math.h>

int main(){
	int tienGui, soTienMongMuon, dem = 1;
	printf("Nhap so tien gui: ");
	scanf("%d", &tienGui);
	printf("Nhap so tien mong muon: ");
	scanf("%d", &soTienMongMuon);
	for(int i = 0;i<1000;i++){
		tienGui = tienGui + tienGui * 8 / 100; 
		dem++;
		if(tienGui==soTienMongMuon){			
			break;
		}
	}
	printf("\nSo nam can gui la: %d", dem);
}
