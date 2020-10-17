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
	int x=0;
	for(int i=0;i<n;i++){
		if(arr[i]+1=arr[i+1]){
			x=x + 1;
			}
		}
	
	printf("%d",x);
	
	
	
	
	}
