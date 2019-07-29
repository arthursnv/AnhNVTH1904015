#include<stdio.h>

int main(){
	int s = 0;
	
	for(int i = 1; i < 1001; i++){
		s = s + i;
	}
	printf("\nS = %d", s);
}
