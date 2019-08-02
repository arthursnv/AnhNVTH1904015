#include<stdio.h>
/*
	Nhap vao 1 mang 10 so nguyen.
	Sau do tim gia tri trung binh cua mang.
*/

int main(){
	int n[10];
	int s = 0;
	
	printf("Nhap vao lan luot 10 so nguyen: \n");
	for(int i = 0; i < 10; i++){
		printf("- So thu %d: ", i+1);
		scanf("%d", &n[i]);
		s += n[i];
	}
	
	printf("\nGia tri trung binh cua mang la: %d", s/10);
}
