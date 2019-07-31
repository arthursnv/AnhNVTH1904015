#include<stdio.h>

int main(){
	int s = 0;
	int n = 1;
	
	while(n < 1001){
		s += n;
		n++;
	}
	printf("\nS = %d", s);
	
	s = 0;
	n = 1;
	do{
		s += n;
		n++;
	} while(n < 1001);
	printf("\nS = %d", s);
	
	s = 0;
	
	for(int i = 1; i < 1001; i++){
		s += i;
		if(i > 5){
			printf("%d", i);
			break;
		}
	}
	printf("\nS = %d", s);
}
