#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int F[n+1];
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=n;i++){
		F[i]=F[i-1]+F[i-2];
	}
	printf("So Fibonaci o vi tri thu %d la %d",n,F[n]);
}

