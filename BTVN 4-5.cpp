#include <stdio.h>
int main(){
	int N;
	printf("Nhap so nguyen N= ");
	scanf("%d",&N);
		
			for(int i=2;i<N;i++){
				int x;
				x=N%i;
				
				if(x==0){
					printf("%d khong phai so nguyen to",N);
					}else{
						printf("%d la so nguyen to",N);
					}
			}
		
	}
	
