#include<stdio.h>

int main(){
	int a[10];
	
	printf("Input 10 numbers: \n");
	printf("============== \n");
	for(int i = 0; i < 10; i++){
		printf("+ Number %d: ", i + 1); scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	printf("Result: ");
	for(int i = 9; i >= 0; i--){
		if(i == 0){
			printf("%d", a[i]);
		} else {
			printf("%d, ", a[i]);
		}
	}
}
