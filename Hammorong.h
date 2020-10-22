#include <stdio.h>
int TinhTong(int a,int b){
	int c = a+b;
	return c;
}
// viet 1 ham tim dao nguoc cua 1 so nguyen
int DaoNguoc(int n){
	int x=0;
	while(n!=0){
		x = x*10+n%10;
		n/=10;
	}
	return x;
}
int DemSoLuongUoc(int n){
	// tra ve 1 khi n <2 de khoi phai dem uoc
	if(n<2) return 1;
	// neu ra duoc den day tuc la n>=2
	// dem so luong uoc cua n
	int uoc = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			uoc++;
		}
	}
	return uoc;
}
bool KiemTraSNT(int n){
	if(n<2) return false;
	// neu den duoc day thi n>=2
	if(n<=3) return true;
	// neu den duoc day thi n > 3
	// kiem tra xem co uoc nao khac 1 va n ko?
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	// neu song sot het vong lap thi la so nguyen to
	return true;
}
void Hello(){
	printf("Hello world!\n");
	return ;
}
void InMang(int arr[],int n){
	printf("\n Danh sach mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void NhapMang(int arr[],int n){
	printf("\nNhap gia tri cho mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
int SNTTT(int n){
	int x;
	for(int i=n+1;true;i++){
		if(KiemTraSNT(i)){
			x=i;
			break;		
		}
	}
	return x;
}
int TongChuSo(int n){
	int s;
	int x=0;
	for(;n!=0;){
		s=n%10;
		x=x+s;
		n=n/10;
	}
return x;
}
int ChuVi(int a,int b,int c){
	int P;
	if(a+b>c && b+c>a && c+a>b){
		 P= a + b + c;
	}
	return P;
}
int BCNN(int a,int b){
	int x;
	for(int i=a;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			x=i;
			break;
		}
	}
	return x;
}
int UCLN(int a,int b){
	int x;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			x=i;
		}
	}
	return x;
}

