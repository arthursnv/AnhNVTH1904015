#include<stdio.h>

int main(){
	int t = 1000, s = 8, n = 0;
	
//	while(t < 2000){
//		t = t + s*t/100;
//		n++;
//	}
//	printf("%d nam thu duoc %d", n, t);
	
	do{
		t = t + s*t/100;
		n++;
	}while (t < 2000);
	printf("%d nam thu duoc %d", n, t);
}
