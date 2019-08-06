#include<stdio.h>
/*
	Sap xep vi tri cac phan tu trong mang theo thu tu tang dan (nho dan).
*/

int main(){
	int a[5] = {11, 5, 3, 9, 7};
	
	// Cach 1: Bubble Sort
	
//	for(int i = 0; i < 5; i++){
//		for(int j = 0; j < 4 - i; j++){
//			if(a[j] > a[j + 1]){
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
	
	// Cach 2: Insertion Sort
	
	for(int i = 0; i < 5; i++){
		int j = i - 1;
		int temp = a[i];
		while((j >= 0) && (temp < a[j])){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	
	for(int i = 0; i < 5; i++){
		printf("%5d", a[i]);
	}
	
	//--- --- 
	printf("\n");
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4 - i; j++){
			if(a[j] < a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for(int i = 0; i < 5; i++){
		printf("%5d", a[i]);
	}
}
