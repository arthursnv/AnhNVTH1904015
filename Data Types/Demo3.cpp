#include <stdio.h>

int main(){
	int n;
	char c = 'c';
	
	printf("Nhap vao so bat ky: ");
	scanf("%d", &n);
	
	switch(n){
		case 2:
			printf("Day la Thu hai\n");
			break;
		case 3:
			printf("Day la Thu ba\n");
			break;
		case 4:
			printf("Day la Thu tu\n");
			break;
		case 5:
			printf("Day la Thu nam\n");
			break;
		case 6:
			printf("Day la Thu sau\n");
			break;
		case 7:
			printf("Day la Thu bay\n");
			break;
		case 8:
			printf("Day la Chu nhat\n");
			break;
		default: 
			printf("Day khong phai ngay trong tuan.\n");
	}
	
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
