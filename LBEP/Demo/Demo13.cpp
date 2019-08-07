#include<stdio.h>
/*
	Kiem tra 1 so co phai la so nguyen to hay khong;
*/

bool ktrasnt(int x){
	int count = 0;
	
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			count++;
		}
	}
	
	if(count > 2){
		return false;
	} else {
		return true;
	}
	return 0;
}

int main(){
	int n;
	bool stt;
	
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d", &n);
	stt = ktrasnt(n);
	
	if(stt == false){
		printf("\n%d khong phai la so nguyen to.", n);
	} else {
		printf("\n%d la so nguyen to.", n);
	}
} 
