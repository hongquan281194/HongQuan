#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen a=");
	scanf("%d",&a);
	int b;
	printf("Nhap so nguyen b=");
	scanf("%d",&b);
	int x;
	for(int i=a;i<=a*b;i++){
		if(i%a==0&&i%b==0){
			x=i;
			}
		}
		printf("%d",x);
	
	
	
	}
