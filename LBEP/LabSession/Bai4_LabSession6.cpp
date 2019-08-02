#include<stdio.h>
/*
	Viet chuong trinh kiem tra so nhap vao la so chan.
*/

int main(){
	int n;
	int status = 0;
	
	do{
		printf("Nhap vao 1 so nguyen bat ky: "); scanf("%d", &n);
		if(n % 2 != 0){
			printf("\nBan dang nhap vao gia tri cua 1 so le.");
			status = 1;
		} else {
			printf("\nGia tri ban nhap vao dung la so chan.");
			status = 0;
		}
	} while (status == 1);
}
