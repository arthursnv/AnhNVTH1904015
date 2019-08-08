#include<stdio.h>
/*
	1. Tim phan tu lon nhat trong mang;
	2. In ra mang da sap xep;
	3. Tim so gan lon nhat trong mang;
	4. Tim hang co tong gia tri lon nhat trong ma tran 4x4;
*/
void singleDimensionalArray(int x){
	int n;
	printf("\n\nNhap vao so phan tu cua mang: "); scanf("%d", &n);
	printf("\n");
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap vao phan tu tai vi tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int _max = 0;
	
	switch(x){
		case 1:
			for(int i = 0; i < n; i++){
				if(max < a[i]){
					max = a[i];
				}
			}
			printf("\nPhan tu lon nhat trong mang la: %d\n--- --- ---\n\n\n\n\n", max);
			break;
		case 2:
			for(int i = 0; i < n; i++){
				for(int j = 0; j < (n - i - 1); j++){
					if(a[j] > a[j + 1]){
						int temp = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp;
					}
				}
			}
			printf("\nMang sau khi sap xep lai: \n");
			printf("a[%d] = {", n);
			for(int i = 0; i < n; i++){
				if(i != (n - 1)){
					printf("%d, ", a[i]);
				} else {
					printf("%d}", a[i]);
				}
			}
			printf("\n--- --- ---\n\n\n\n\n");
			break;
		case 3:
			max = a[0];
			for(int i = 0; i < n; i++){
				if(max < a[i]){
					_max = max;
					max = a[i];
				}
			}
			printf("\nPhan tu gan lon nhat trong mang la: %d\n", _max);
			printf("--- --- ---\n\n\n\n\n");
			break;
		default:
			break;
	}
}

void twoDimensionalArrays(){
	int a[4][4];
	
	printf("Nhap vao gia tri cho cac phan tu trong ma tran 4x4: \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
		}
	}
	printf("\n\n\n\n\n\n\n\n\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	
	int s_max = 0;
	int s = 0;
	int index = 0;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			s += a[i][j];
		}
		if(s_max < s){
			s_max = s;
			index = i;
		}
		s = 0;
	}
	
	printf("\nHang co tong gia tri lon nhat trong mang 4 x 4 la: \n\n");
	for(int i = 0; i < 4; i++){
		printf("%5d", a[index][i]);
	}
	printf("\n--- --- ---\n\n\n\n\n");
}

int main(){
	int choose = 0;
	
	do{
		printf("*** DANH SACH CHUONG TRINH: \n");
		printf("1 - Tim phan tu lon nhat trong mang. \n");
		printf("2 - In ra mang da sap xep. \n");
		printf("3 - Tim phan tu gan lon nhat trong mang. \n");
		printf("4 - Tim hang co tong gia tri lon nhat trong ma tran 4x4. \n");
		printf("0 - Ket thuc. \n");
		printf("--- --- ---\n");
		printf("Chon: "); scanf("%d", &choose);
		
		switch(choose) {
			case 1:
				// Tim phan tu lon nhat trong mang;
				singleDimensionalArray(1);
				break;
			case 2:
				// In ra mang da sap xep;
				singleDimensionalArray(2);
				break;
			case 3:
				// Tim phan tu gan lon nhat trong mang;
				singleDimensionalArray(3);
				break;
			case 4:
				// Tim hang co tong gia tri lon nhat trong ma tran 4 x 4;
				twoDimensionalArrays();
				break;
			default:
				// Ket thuc chuong trinh;
				printf("Ket thuc chuong trinh. \n");
				break;
		}	
	} while(choose !=0);
}
