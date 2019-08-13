#include<stdio.h>
#include<iostream>
#include<stdlib.h>
/*
	
*/

int main(){
	int arr[5] = {6,7,8,9,10};
	
	printf("arr[2] = %d\n", arr[2]);
	printf("arr[2] = %d\n", *(arr + 2));
	printf("arr[0] = %d\n", *arr);
	
	char s[10];
	gets(s);
	
	printf("Chuoi vua nhap: %s\n", s);
	
	// --- --- ---
	
	int *ar;
	// hoac
	//ar = (int *) malloc(5 * sizeof(int));
	// hoac
	ar = (int *) calloc(5, sizeof(int));
	for(int i = 0; i < 10; i++){
		ar[i] = i + 10; // *(ar + i) = i + 10;
	}
	for(int i = 0; i < 10; i++){
		printf("%3d ", ar[i]); // printf("%3d ", *(ar + i));
	}
	// cap lai 10 o bo nho
	ar = (int *) realloc(ar, 10 * sizeof(int));
	
	return 0;
}
