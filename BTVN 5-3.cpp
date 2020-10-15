#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen a=");
	scanf("%d",&a);
	int b;
	printf("Nhap so nguyen b=");
	scanf("%d",&b);
	if(a==0||b==0){
		printf("UCLN cua %d va %d la %d",a,b,a + b);
		}else{
			int x;
			for(int i=1;i<=a;i++){
				if(a%i==0&&b%i==0){
					x=i;
					}
				}
				printf("UCLN cua %d va %d la %d",a,b,x);
		}
	}
