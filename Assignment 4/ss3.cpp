#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){
	int n, m;
	printf("HOM NAY LA THU MAY: ");
	scanf("%d", &n);
	
	switch(n){
		case 2:
			printf("Chac chan la thu 2\n");
			break;
		case 3:
			printf("Chac chan la thu 3\n");
			break;
		case 4:
			printf("Chac chan la thu 4\n");
			break;
		case 5:
			printf("Chac chan la thu 5\n");
			break;
		case 6:
			printf("Chac chan la thu 6\n");
			break;
		case 7:
			printf("Chac chan la thu 7\n");
			break;
		case 8:
			printf("Chac chan la thu Chu Nhat\n");
			break;
		default:
			printf("Co ca thu %d ak\n", n);
	}
	
	printf("HOM NAY LA THU MAY: ");
	scanf("%d", &m);
	
	if(m == 2)
		printf("Chac chan la thu 2\n");
	else if(m == 3)
		printf("Chac chan la thu 3\n");
	else if(m == 4)
		printf("Chac chan la thu 4\n");
	else if(m == 5)
		printf("Chac chan la thu 5\n");
	else if(m == 6)
		printf("Chac chan la thu 6\n");
	else if(m == 7)
		printf("Chac chan la thu 7\n");
	else if(m == 8)
		printf("Chac chan la thu Chu Nhat\n");
	else 
		printf("Co ca thu %d ak\n", m);
}
