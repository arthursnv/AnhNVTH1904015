#include<stdio.h>
/*
	Nhap ma tran 4x4. Tinh trung binh cong duong cheo;
*/

int main(){
	int a[4][4];
	int tongduongcheo = 0;
	float tbc;
	
	printf("Nhap vao cac gia tri cho ma tran 4 x 4: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i == j){
				tongduongcheo += a[i][j];
			}
		}
	}
	
	tbc = (float)tongduongcheo / 4;
	printf("\nGia tri tbc cua duong cheo la: %.2f", tbc);
}
