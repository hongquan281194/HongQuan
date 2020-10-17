#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so can nhap la ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("Nhap arr[%d]",i);
	scanf("%d",&arr[i]);
		}
	int x;
	for(int i=0;i<n;i++){
		if(x>arr[i] && arr[i]>0){
			x=arr[i];
			}
		}
	
	printf("%d",x);
	
	
	
	}
