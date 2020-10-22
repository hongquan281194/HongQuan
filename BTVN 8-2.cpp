#include <stdio.h>
#include "Hammorong.h"
int main(){
	int m;
	int n;
	printf("Nhap m=");
	scanf("%d",&m);
	printf("Nhap n=");
	scanf("%d",&n);
	int p,B;
	p=UCLN(m,n);
	B=BCNN(m,n);
	printf("UCLN %d va BCNN %d",p,B);
}
