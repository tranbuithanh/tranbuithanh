#include<stdio.h>
int main(){
	//n phai lon hon 0
	int n; printf("nhap n (n>0): "); scanf("%d",&n);
	int i = 1;
	while (i<=n){
	if(n%i==0){
		printf("la uoc cua n: %d\n",i);
	}
	  i++;
	}
}
