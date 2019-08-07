#include<stdio.h>
/*
	Kiem tra 1 so co phai la so nguyen to hay khong;
*/

int ktrasnt(int x){
	int count = 0;
	
	for(int i = 1; i <= x; i++){
		if(x % i == 0){
			count++;
		}
	}
	
	if(count > 2){
		printf("\n%d khong phai la so nguyen to.", x);
	} else {
		printf("\n%d la so nguyen to.", x);
	}
	return 0;
}

int main(){
	int n;
	int stt;
	
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d", &n);
	ktrasnt(n);
} 
