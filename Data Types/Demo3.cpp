#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap vao so bat ky: ");
	scanf("%d", &n);
	
	if(1 < n && n < 9){
		if(n==8){
			printf("Day la Chu nhat!");
		} else {
			printf("Day la thu %d", n);
		}
	} else {
		printf("%d khong phai la mot ngay trong tuan!", n);
	}
}
