#include<stdio.h>
/*
	Nhap vao ma tran 4 x 3. Tim ma tran chuyen vi cua ma tran do;
*/

int main(){
	int a[4][3], b[3][4];
	
	printf("Nhap vao gia tri cho mang a[4][3]: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	
	printf("Ma tran a[4][3]: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	// Chuyen vi ma tran 4 x 3 thanh 3 x 4:
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			b[j][i] = a[i][j];
		}
	}
	
	printf("Ma tran 4 x 3 sau khi chuyen vi thanh 3 x 4 la: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
}
