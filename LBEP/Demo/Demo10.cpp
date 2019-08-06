#include<stdio.h>
/*
	Khai bao mang ar[m][n], tu dong nhap gia tri cua mang va in ra man hinh.
	Sau do in ra hang ma tong cac phan tu co gia tri cao nhat.
*/

int main(){
	int m, n;
	
	printf("Nhap vao gia tri cua m va n cho mang ar[m][n]\n");
	printf("- m = "); scanf("%d", &m);
	printf("- n = "); scanf("%d", &n);
	
	int ar[m][n];
	int x = 0;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			x++;
			ar[i][j] = x;
		}
	}
	
	printf("\nar[%d][%d] = {", m, n);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == (m-1) && j == (n-1)){
				printf("%d}", ar[i][j]);
			} else {
				printf("%d, ", ar[i][j]);
			}
		}
	}
	
	printf("\n\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%10d ", ar[i][j]);
		}
		printf("\n");
	}
	
	int s = 0;
	int rmax = 0;
	for(int i = 0; i < m; i++){
		int s2 = 0;
		for(int j = 0; j < n; j++){
			s2 += ar[i][j];
			if(s < s2){
				s = s2;
				rmax = i;
			}
		}
	}
	
	printf("\n\nHang co tong gia tri lon nhat la: %d\n", s);
	
	for(int j = 0; j < n; j++){
		printf("%10d ", ar[rmax][j]);
	}
}
