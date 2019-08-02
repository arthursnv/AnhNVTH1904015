#include<stdio.h>

int main(){
	int a[5];
	
	for(int i = 0; i < 5; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int min;
	int max;
	min = a[0];
	max = a[0];
	int temp1 = a[0];
	int temp2 = a[0];
	
	for(int i = 0; i < 5; i++){
		if(min == a[0]){
			temp1 = a[1];
		}
		if(max == a[0]){
			temp2 = a[1];
		}
		if(min > a[i]){
			min = a[i];
		}
		if(min < a[i] && a[i] < temp1){
			temp1 = a[i];
		}
		if(max < a[i]){
			max = a[i];
		}
		if(max > a[i] && a[i] > temp2){
			temp2 = a[i];
		}
	}
	
	printf("\nSo co gia tri nho nhat la: %d", min);
	printf("\nSo co gia tri lon nhat la: %d", max);
	printf("\nSo co gia tri gan nho nhat la: %d", temp1);
	printf("\nSo co gia tri gan lon nhat la: %d", temp2);
	
}
