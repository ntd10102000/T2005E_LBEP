#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,n;  
  
 printf("Ban hay nhap so n: ");  
 scanf("%d",&n);  
  
 for(i=2;i<n;++i)   
 {  
  n3=n1+n2;  
  n1=n2;  
  n2=n3;  
 }printf("\nPhan tu n trong day fibonaci la: %d",n3);   
 
getch();  
}  
