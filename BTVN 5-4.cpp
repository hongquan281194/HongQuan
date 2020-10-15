#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen duong a=");
	scanf("%d",&a);
	int b;
	printf("Nhap so nguyen duong b=");
	scanf("%d",&b);
	int x;
	if(a==0||b==0){
		printf("BCNN cua %d va %d la 0");
		}else{
			for(int i=a;i<=a*b;i++){
				if(i%b==0&&i%a==0){
					x=i;
					break;
					}
				}
				printf("BCNN cua %d va %d la %d",a,b,x);
		}
	
	
	
	
	
	
	
	}
