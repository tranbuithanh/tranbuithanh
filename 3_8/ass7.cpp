#include<stdio.h>
#include<math.h>
int main(){
 	int n;
	printf("nhap kich thuoc mang n =");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap mang : \n");
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("\nnhap so x de xet gia tri:");
	scanf("%d",&x);
	int max=0;
	int vt,gt;
	for(int i=0;i<n;i++){
		int h=x-arr[i];
		if(h>max){
			max=h;
			vt=i;gt=arr[i];
		}
	}
	if(max==0){
		printf("mang toan gia tri bang nhau");
	}else{
		printf("khoang cach xa nhat o vi tri %d co gia tri la: %d",vt,gt);
	}
}
