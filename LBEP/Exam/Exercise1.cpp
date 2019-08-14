#include<stdio.h>

int sum(int x, int y){
	return x + y;
}

int substraction(int x, int y){
	return x - y;
}

int multiplication(int x, int y){
	return x * y;
}

int division(int x, int y){
	return x / y;
}

int main(){
	int a, b;
	int choose;
	do{
		printf("Calculation: \n");
		printf("============ \n");
		printf("1. Input Number \n");
		printf("2. Calculate Sum \n");
		printf("3. Calculate Substraction \n");
		printf("4. Calculate Multiplication \n");
		printf("5. Calculate Division \n");
		printf("6. Exit \n");
		printf("--- \n");
		printf("Choose: "); scanf("%d", &choose);
		switch(choose){
			case 1:
				// Input Number
				printf("1. Input Number \n");
				printf("a = "); scanf("%d", &a);
				printf("b = "); scanf("%d", &b);
				printf("\n\n\n");
				break;
			case 2:
				// Calculate Sum
				printf("2. Calculate Sum \n");
				printf("Result: %d + %d = %d \n", a, b, sum(a, b));
				printf("\n\n\n");
				break;
			case 3:
				// Calculate Substraction
				printf("2. Calculate Substraction \n");
				printf("Result: %d - %d = %d \n", a, b, substraction(a, b));
				printf("\n\n\n");
				break;
			case 4:
				// Calculate Multiplication
				printf("2. Calculate Substraction \n");
				printf("Result: %d * %d = %d \n", a, b, multiplication(a, b));
				printf("\n\n\n");
				break;
			case 5:
				// Calculate Division
				printf("2. Calculate Substraction \n");
				printf("Result: %d / %d = %d \n", a, b, division(a, b));
				printf("\n\n\n");
				break;
			case 6:
				// Exit
				printf("Exit. \n");
				break;
			default:
				printf("Try again! \n");
				break;
		}
	} while(choose !=6 );
}
