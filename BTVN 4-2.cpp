#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	}while(n<=0);
	float S=0;
	for(int i=1;i<=n;i++){
		S=S + 1/i;
		}
		printf("%f",S);
}
