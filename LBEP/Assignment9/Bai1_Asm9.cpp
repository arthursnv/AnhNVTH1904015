#include<stdio.h>
#include<string.h>
/*
	Nhap vao 2 chuoi s1 va s2. Kiem tra s1 co chua s2 ko.
*/

int containChecker(char s1[20], char s2[20]){
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	char s3[20];
	
	for(int i = 0; (i + s2_length) <= s1_length; i++){
		for(int j = 0; j < s2_length; j++){
			s3[j] = s1[i + j];
		}
		int ss = strcmp(s2, s3);
		if(ss == 0){
			return 1;
		}
	}
	return 0;
}

int main(){
	char s1[20], s2[20];
	int s1_length = 0;
	int s2_length = 0;
	
	printf("Nhap vao chuoi s1: ");
	gets(s1);
	printf("Nhap vao chuoi s2: ");
	gets(s2);
	if(containChecker(s1, s2) == 1){
		printf("\nChuoi s1 co chua chuoi s2.");
	} else {
		printf("\nChuoi s1 khong chua chuoi s2.");
	}
}
