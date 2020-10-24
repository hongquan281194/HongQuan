#include <stdio.h>
#include <string.h>
int main(){
	char s[200];
	printf("Nhap chuoi:");
	scanf("%s",s);
	int x;
	for(int i=0;i<=strlen(s);i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			x++;
		}
	}
	printf("Tong so nguyen am trong chuoi la %d\n",x);
	int y = strlen(s) - x;
	printf("Tong so ky tu con lai la %d",y);
	
}
