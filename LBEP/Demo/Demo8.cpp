#include<stdio.h>

int main (){
	//Kiem tra So nguyen to (Chi chia het cho 1 va chinh no)
	
	int n;
	int count = 0;
	
	//Nhap vao 1 so nguyen bat ky
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d", &n);
	
	//Kiem tra dieu kien n chia cho 1 so nguyen bat ky co du khong
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			//Neu n chia cho mot so i bat ky co so du = 0 thi count +1
			count++;
		}
	}
	
	if(count > 2){
		printf("\n%d khong phai la so nguyen to.", n);
	} else {
		printf("\n%d la so nguyen to.", n);
	}
}
