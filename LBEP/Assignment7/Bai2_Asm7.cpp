#include<stdio.h>
/*
	Nhap vao 2 ma tran 4 x 3. Cong tru 2 ma tran va in ra ket qua;
*/

int main(){
	int a[4][3], b[4][3], s[4][3];
	
	printf("Nhap vao gia tri cho mang a[4][3]: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	
	printf("Nhap vao gia tri cho mang b[4][3]: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("b[%d][%d] = ", i, j); scanf("%d", &b[i][j]);
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
	
	printf("Ma tran b[4][3]: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%3d ", b[i][j]);
		}
		printf("\n");
	}
	
	// Tong 2 ma tran:
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			s[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Tong cua 2 ma tran a[4][3] va b[4][3] la: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%3d ", s[i][j]);
		}
		printf("\n");
	}
	
	// Hieu cua 2 ma tran:
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			s[i][j] = a[i][j] - b[i][j];
		}
	}
	
	printf("Tong cua 2 ma tran a[4][3] va b[4][3] la: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%3d ", s[i][j]);
		}
		printf("\n");
	}
}
