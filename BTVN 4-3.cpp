#include <stdio.h>
int main(){
	int x=1;
	int n;
	printf("Nhap so so le dau tien lon hon 0 la: ");
	scanf("%d",&n);
	int S;
	for(int i=1;i<=n;i++){
		S=i*x + i*(i-1);
		}
		printf("Tong cua %d so le dau tien la %d",n,S);
		}
