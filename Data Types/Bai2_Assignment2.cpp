#include <stdio.h>

int main(int argc, char** argv) {
	int a, b, c;
	
	printf("Nhap vao so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%d", &b);
	printf("Nhap vao so thu ba: ");
	scanf("%d", &c);
	
	int max = a;
	int min = a;
	if (a < b){
		max = b;
	} else {
		min = b;
	}
	if (max < c){
		max = c;
	}
	if (min > c){
		min = c;
	}
	printf("So lon nhat la: %d\n", max);
	printf("So nho nhat la: %d\n", min);
	
}
