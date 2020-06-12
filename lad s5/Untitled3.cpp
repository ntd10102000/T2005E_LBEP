#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,n;  
  
 printf("Nhap n: ");  
 scanf("%d",&n);  
  
  
 for(i=2;i<n;i++){  
 	n3=n1+n2;  
 	n1=n2;    
 	if(n<=n3){
  	break;
	}  
	n2=n3;
}printf(" %d", n2);  
  
 
}  
