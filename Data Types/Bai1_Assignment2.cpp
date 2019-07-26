#include <stdio.h>

int main(){
	float a, b;
	printf("Nhap vao so thu nhat: ");
	scanf("%f", &a);
	printf("\nNhap vao so thu hai: ");
	scanf("%f", &b);
	if(a < b){
		printf("%.0f * %.0f = %.0f", a, b, a*b);
	} else if((a > b)&&(b!=0)){
		printf("%.0f / %.0f = %f", a, b, a/b);
	} else {
		printf("Vui long nhap gia tri cua b khac 0");
	}
}
