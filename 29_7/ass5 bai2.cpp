#include <stdio.h>
int main(){
	int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int S=0;
  	for(int i = 1; i <= n; i++){
    	if(n % i == 0){
      	printf("%3d",i);
      	S = S + i;
		}
	}
	printf("\nTong cac uoc so cua n la: %d",S);
}
