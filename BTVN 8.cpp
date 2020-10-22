#include <stdio.h>
#include "Hammorong.h"
int main(){
	//tong chu so
	int n;
	printf("Nhap n=: ");
	scanf("%d",&n);
	int x = TongChuSo(n);
	printf("%d\n",x);
	//tong ba canh tam giac
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	int P=ChuVi(a,b,c);
	printf("%d",P);
	//UCLN
	
}
