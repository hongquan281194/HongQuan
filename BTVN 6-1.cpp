#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so can nhap la: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]",i);
		scanf("%d",&arr[i]);
		}
	
	int x;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			x=arr[i];
			}
		}
	
	
	printf("so le cuoi cung trong mang la %d",x);
	
	
	}
