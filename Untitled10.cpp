#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen duong a=");
	scanf("%d",a);
	int b;
	printf("Nhap so nguyen duong b=");
	scanf("%d",b);
	int x;
	for(int i=a;i<=a*b;i++){
		if(i%b==0&&i%a==0){
			break;
			x=i;
			}
		}
		printf("%d",x);
	
	
	
	
	
	
	
	}
