#include<stdio.h>

int main(){
	for(int i = 0; i < 10; i++){
		printf("Bat dau lau san tang thu %d\n", i);
		if(i==6){
			printf("Khong lau san tang %d\n", i);
			continue;
		}
		printf("Lau xong san tang thu %d\n", i);
	}
}
