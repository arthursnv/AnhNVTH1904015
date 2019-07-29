#include<stdio.h>
/*
	Kiem tra 1 so nhap vao co phai la 1 so thuan nghich khong.
*/

int main(){
	int n;
	int ketqua = 0;
	
	printf("\nNhap vao mot so n bat ky: ");
	scanf("%d", &n);
	int m = n;
	int temp = 0;
	do{
		temp = temp * 10 + n % 10;
		n /= 10;
	} while (n > 0);
	if(temp==m){
		printf("\nDay la so thuan nghich.");
	} else {
		printf("\nDay khong phai la so thuan nghich.");
	}
}
