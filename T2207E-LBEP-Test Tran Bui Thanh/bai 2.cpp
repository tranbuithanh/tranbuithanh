#include<stdio.h>
void nhap(int a[], int &n)
{
    do
	{
        printf("Nhap n: ");
        scanf("%d",&n);
    }
    while(n<2||n>99);
     
    for(int i=0; i<n; i++)
	{
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
 
void xuat(int a[], int n)
{
    for(int i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}
int ktnt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
 
void insont(int a[], int n)
{
    printf("\nThe prime numbers in the array are: \n");
    for(int i=0;i<n;i++)
        if(ktnt(a[i]))
            printf("%4d",a[i]);
            else
            printf("No prime number\n");
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    insont(a,n);
    return 0;
}
