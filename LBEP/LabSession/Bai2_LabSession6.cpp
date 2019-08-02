#include<stdio.h>
/*
	Nhap vao 1 so, kiem tra day la so am hay so duong.
*/

int main(){
	int a;
	
	printf("Nhap vao 1 so bat ky: "); scanf("%d", &a);
	if(a > 0){
		printf("Day la so duong.");
	} else if(a < 0){
		printf("Day la so am.");
	} else {
		printf("Ban vua nhap vao gia tri 0.");
	}
}
