#include<stdio.h>
/*
	Kiem tra nhap vao do dai 3 canh co phai la 1 tam giac khong.
	Neu khong dung bat nhap lai.
*/

int main(){
	int a, b, c;
	int ketqua = 0;
	
	do{
		printf("\nNhap vao lan luot 3 canh cua mot tam giac: \n");
		printf("\na = ");
		scanf("%d", &a);
		printf("\nb = ");
		scanf("%d", &b);
		printf("\nc = ");
		scanf("%d", &c);
		
		if((a + b) > c && (a + c) > b && (b + c) > a){
			printf("\nDay la 1 tam giac.");
			ketqua = 1;
		} else {
			printf("\nDay khong phai la 1 tam giac. Vui long nhap lai!\n--- --- ---\n");
		}
	} while (ketqua==0);
	
}
