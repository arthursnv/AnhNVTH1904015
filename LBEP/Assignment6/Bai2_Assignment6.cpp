#include<stdio.h>
/*
	Nhap vao 1 mang co n phan tu.
	(Dk: khong nhap trung so)
*/

int main(){
	int n = 0;
	
	printf("Cai dat so luong phan tu cua mang la: ");
	scanf("%d", &n);
	int a[n];
	int i = 0;
	
	do{
		int status = 0;
		printf("Nhap vao phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
		if(i > 0){
			for(int j = 0; j < i; j++){
				if(a[j] == a[i]){
					status = 1;
					printf("\nGia tri nay da ton tai. Vui long nhap lai!\n\n");
				} else {
					status = 0;
				}
			}
		}
		if(status == 0){
			i++;
		}
	} while(i < n);
	
	printf("\nMang ban vua nhap vao la: a = {");
	for(int j = 0; j < n; j++){
		printf("%d", a[j]);
		if(j < (n - 1)){
			printf(", ");
		}
	}
	printf("}\n");
}
