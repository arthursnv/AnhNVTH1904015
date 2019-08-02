#include<stdio.h>
/*
	Nhap vao 1 mang n so, va in ra so lon nhat, so be nhat.
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
	
	int max = a[0];
	int min = a[0];
	
	printf("\n--- --- ---\nKet qua:\na = {");
	for(int i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
		if(i < (n-1)){
			printf("%d, ", a[i]);
		} else {
			printf("%d}", a[i]);
		}
	}
	
	printf("\nSo lon nhat cua mang a la: %d", max);
	printf("\nSo nho nhat cua mang a la: %d", min);
}
