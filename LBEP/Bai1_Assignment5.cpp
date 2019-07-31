#include<stdio.h>
/*
	Nhap vao 1 so n.
	Tim so thu n trong day Fibonaci.
*/

int main(){
	int n;
	int a = 0, b = 1, temp;
	
	printf("\nNhap vao 1 so n = ");
	scanf("%d", &n);
	printf("\nDay so fibonacci lan luot la:", n);
	for(int i = 0; i < n; i++){
		temp = a + b;
		printf(" %d", temp);
		a = b;
		b = temp;
		if(i == (n - 1)){
			printf(" ...\n--- --- ---\nVi tri thu %d la %d", n, temp);
		}
	}
}
