#include <stdio.h>
int main(){
	int x;
	printf("Nhap so x=");
	scanf("%d",&x);
		int a1;
		a1=(x%10);
		int b1;
		b1=(x/10);
		int a2;
		a2=(b1%10);
		int b2;
		b2=(b1/10);
		int a3;
		a3=(b2%10);
		int b3;
		b3=(b2/10);
		int a4;
		a4=(b3%10);
		int b4;
		b4=(b3/10);
		int y;
		if(a4==0){
			if(a3==0){
				if(a2==0){
					if(a1==0){
						printf("So dao nguoc cua %d la 0",x);
						}else{
							printf("So dao nguoc cua %d la %d",x,a1);
						}
					}else{
						printf("So dao nguoc cua %d la %d",x,y=(10*a1 + a2));
					}
				}else{
					printf("So nghich dao cua %d la %d",x,y=(100*a1 + 10*a2 + a3));
					}
			}else{
				printf("So nghich dao cua %d la %d",x,y=(1000*a1 + 100*a2 + 10*a3 + a4));
			}
	}
