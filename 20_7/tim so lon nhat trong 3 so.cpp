#include <stdio.h>
int main(){
	int a,b,c ;
	printf("Nhap a=");
	scanf("%d", &a);
	
	printf("Nhap b=");
	scanf("%d", &b);
	
	printf("Nhap c=");
	scanf("%d", &c);
	
	int max=a;
	if (a<b){
		max=b;
	}
	if (b<c){
		max=c;
	}
	printf("so lon nhat trong ba so la: %d",max);
	
	
}
