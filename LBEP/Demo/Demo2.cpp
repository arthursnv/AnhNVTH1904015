#include <stdio.h>

int main(){
	int a, b;
	
	printf("Nhap vao gia tri so thu nhat: ");
	scanf("%d", &a);
	printf("\nNhap vao gia tri so thu hai: ");
	scanf("%d", &b);
	
	if(a > b){
		printf("Hieu so cua a - b = %d", a - b);
	} else {
		printf("Tong so cua a + b = %d", a + b);
	}
}
