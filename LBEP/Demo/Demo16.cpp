#include<stdio.h>
#include<iostream>
/*
	Dung bien con tro in ra gia tri cua:
		x + y = ?
		x - y = ?
*/

int main(){
	int x, y;
	int *p, *q;
	
	printf("Nhap vao gia tri cua x: "); scanf("%d", &x);
	printf("Nhap vao gia tri cua y: "); scanf("%d", &y);
	
	p = &x;
	q = &y;
	
	int s1 = (*p) + (*q);
	int s2 = (*p) - (*q);
	printf("\nx + y = %d", s1);
	printf("\nx - y = %d", s2);
}
