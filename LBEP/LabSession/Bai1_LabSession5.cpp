    
#include<stdio.h>

int main (){
	//Kiem tra So nguyen to (Chi chia het cho 1 va chinh no)
	
	int n;
	int count = 0;
	
	//Nhap vao 1 so nguyen bat ky
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		//Kiem tra dieu kien i chia cho 1 so nguyen bat ky co du khong
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				//Neu i chia cho mot so j bat ky co so du = 0 thi count +1
				count++;
			}
		}
		
		if(count <= 2){
			printf("\n%d la so nguyen to.", i);
			count = 0;
		}
	}
}
