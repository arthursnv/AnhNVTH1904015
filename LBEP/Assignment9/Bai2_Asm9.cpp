#include<stdio.h>
#include<string.h>
/*
	Nhap vao 1 mang n chuoi, sap xep lai mang nay theo thu tu Alphabet.
*/

int main(){
	int n;
	
	printf("Nhap vao gia tri cua so chuoi can nhap: \n");
	printf("n = "); scanf("%d", &n);
	
	char s[n][20];
	gets(s[0]);
	
	for(int i = 0; i < n; i++){
		printf("Nhap vao chuoi %d: ", i + 1);
		gets(s[i]);
	}
	
	int temp;
	char s1[20];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			temp = strcmp(s[j], s[j + 1]);
			if(temp > 0){
				strcpy(s1,s[j]);
				strcpy(s[j], s[j + 1]);
				strcpy(s[j + 1], s1);
			}
		}
	}
	
	printf("\nMang cac chuoi nhap vao sau khi duoc sap xep lai lan luot la: \n");
	for(int i = 0; i < n; i++){
		puts(s[i]);
	}
	
}
