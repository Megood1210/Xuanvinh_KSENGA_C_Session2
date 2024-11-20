#include<stdio.h>
int main(){
	int a,b,cv,dt;
	printf("Nhap canh a = ");
	scanf("%d",&a);
	printf("Nhap canh b = ");
	scanf("%d",&b);
	
	cv= 2*(a+b);
	dt= a*b;
	
	printf("Chu vi cua HCN = %d\n",cv);
	printf("Dien tich cua HCN = %d",dt);		
}
