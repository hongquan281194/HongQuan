#include <stdio.h>
int main(){
	int x;
	int y;
	int z;
	do{
		printf("x= ");
		scanf("%d",&x);
		printf("y= ");
		scanf("%d",&y);
		printf("z= ");
		scanf("%d",&z);
	}while((x+y<z)||(x+z<y)||(y+z<x));
	int P;
	P=(x+y+z);
	float Q;
	Q=(float)P/2;
	float S;
	S=sqrt(Q*(Q-x)*(Q-y)*(Q-z));
	printf("Chu vi la %d",P);
	printf("Dien tich la %f",S);
	
}
