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
	
	if(a>b&&a>c&&b>c){
		printf("max la a, min la c");
	} else if(a>b&&a>c&&c>b){
		printf("max la a, min la b");
	} else if(b>a&&b>c&&a>c){
		printf("max la b, min la c");
	} else if(b>a&&b>c&&c>a){
		printf("max la b, min la a");
	} else if(c>a&&c>b&&a>b){
		printf("max la c, min la b");
	} else if(c>a&&c>a&&b>a){
		printf("max la c, min la a");
	}
	
}
