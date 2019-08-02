#include<stdio.h>
/*
	Nhap vao 2 so, in ra so co gia tri lon hon.
*/

int main(){
	int a, b;
	
	printf("Nhap vao 2 so a va b: \n");
	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);
	if(a > b){
		printf("\n%d la so lon hon", a);
	} else {
		printf("\n%d la so lon hon", b);
	}
}
