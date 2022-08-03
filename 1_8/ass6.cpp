#include<stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc mang n =");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap mang : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("\nnhap so x can tim:");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++){
		if(x == arr[i]){
			printf("da tim thay gia tri x\n");
			break;
		}else{
			printf("khong tim thay x\n");
	     }
	}
}
