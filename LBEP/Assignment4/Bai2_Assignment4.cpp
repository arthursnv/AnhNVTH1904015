#include<stdio.h>
/*
	Kiem tra 1 so nhap vao co phai la 1 so hoan hao khong.
*/

int main(){
	int n;
	int tongcacuoc = 0;
	int ketqua = 0;
	
	printf("\nNhap vao mot so n bat ky: ");
	scanf("%d", &n);
	if(n==1){
		printf("\n%d khong phai la so hoan hao.", n);
	} else {
		for(int i = 1; i < n; i++){
			if(n % i == 0){
				tongcacuoc += i;
			}
		}
		if(tongcacuoc == n){
			printf("\n%d la so hoan hao.", n);
			ketqua = 1;
		} else {
			printf("\n%d khong phai la so hoan hao.", n);
		}
	}
}
