#include<stdio.h>
/*
	Viet chuong trinh tinh s = 1 + 1/2 + 1/3 + … + 1/n
*/

int main(){
	float s = 0;
	int n;
	
	printf("Chuong trinh tinh S = 1 + 1/2 + 1/3 + ... + 1/n\n");
	printf("Nhap n: "); scanf("%d", &n);
	printf("\n\nS =");
	
	for(int i = 1; i <= n; i++){
		s += (float)1/i;
		if(i != n){
			printf(" 1/%d +", i);
		} else {
			printf(" 1/%d", i);
		}
	}
	printf(" = %f", s);
}
