#include <stdio.h>

int main(){
	float a, b;
	printf("Nhap vao so thu nhat: ");
	scanf("%f", &a);
	printf("\nNhap vao so thu hai: ");
	scanf("%f", &b);
	
	if(b!=0){
		if(a > b){
			printf("%.0f / %.0f = %f", a, b, a/b);
		} else {
			printf("%.0f * %.0f = %.0f", a, b, a*b);
		}
	} else {
		printf("Vui long khong nhap gia tri 0!");
	}
}
