#include<stdio.h>
/*
	Viet chuong trinh tinh giai thua cua 1 tap hop so n nhap vao tu ban phim.
*/

int main(){
	int n;
	int ketqua = 1;
	
	printf("Nhap vao n: "); scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		ketqua *= i;
	}
	printf("%d! = %d", n, ketqua);
}
