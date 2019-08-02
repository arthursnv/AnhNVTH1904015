#include<stdio.h>
/*
	Nhap vao 1 mang n so, va in ra gia tri trung binh cong cua mang do.
*/

int main(){
	int n = 0;
	int s = 0;
	
	printf("Khai bao 1 mang co n phan tu:\n");
	printf("n = "); scanf("%d", &n);
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		printf("\nNhap vao phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	
	printf("\n--- --- ---\nKet qua:\na = {");
	for(int i = 0; i < n; i++){
		if(i < (n-1)){
			printf("%d, ", a[i]);
		} else {
			printf("%d}", a[i]);
		}
	}
	
	for(int i = 0; i < n; i++){
		s += a[i];
	}
	printf("\nGia tri trung binh cong cua mang a la: %d", s/n);
}
