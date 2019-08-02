#include<stdio.h>
/*
	Nhao vao 2 gia tri x, y.
	Doi gia tri 2 bien cho nhau.
*/

int main(){
	int x, y;
	int temp;
	
	printf("Nhap vao 2 gia tri cho x va y: \n");
	printf("x = "); scanf("%d", &x);
	printf("y = "); scanf("%d", &y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("\nGia tri cua x va y sau khi hoan doi la: \nx = %d\ny = %d", x, y);
}
