#include<stdio.h>
/*
	Nhap vao 1 so n.
	Tim tat ca cac so thuan nghich nho hon n.
*/

int main(){
	int n;
	
	printf("\nNhap vao mot so n bat ky: ");
	scanf("%d", &n);
	printf("\n--- --- ---\nDanh sach cac so thuan nghich nho hon %d: ", n);
	for(int i = 1; i < n; i++){
		int m = i;
		int temp = 0;
		do{
			temp = temp * 10 + m % 10;
			m /= 10;
		} while (m > 0);
		if(temp==i){
			printf(" %d", i);
		}
	}
}
