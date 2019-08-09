#include<stdio.h>
#include<string.h>
void inrachuoidainhat(char s[][20], int n){
	int vi_tri = 0;
	long int max = strlen(s[0]);
	for (int i = 0; i < n; ++i)
	{
		if(max < strlen(s[i])){
			max = strlen(s[i]);
			vi_tri=i;
		}
	}
	printf("chuoi dai nhat: %s\n",s[vi_tri]);
}

int main(){
	/* Mang 1 chieu:
	char s1[20], s2[20];
	
	printf("Nhap chuoi 1: ");
	scanf("%s", s1);
	printf("Nhap chuoi 2: ");
	scanf("%s", s2);
	
	printf("\nChuoi 1 vua nhap la: \n%s\n", s1);
	// ham strcmp dung de so sanh 2 chuoi;
	// dung ham chuoi thi phai khai bao thu vien string.h;
	int ss = strcmp(s1, s2);
	printf("\nKet qua: %d", ss);
	if(ss < 0){
		printf("\nChuoi 1 nho hon chuoi 2.\n");
	} else if(ss > 0){
		printf("\nChuoi 1 lon hon chuoi 2.\n");
	} else {
		printf("\nChuoi 1 giong chuoi 2.\n");
	}
	// ham strchar(str1, chr) dung de tim vi tri cua chr trong chuoi str1;
	printf("\nVi tri cua ky tu 'h' trong chuoi 1 la: %ld\n", strchr(s1, 'h')-s1);
	// ham strcpy(str1, str2) dung de copy chuoi str2 cho str1;
	strcpy(s1, s2);
	printf("\nChuoi 1 sau khi dung ham strcpy: \n%s", s1);
	// ham strcat(str1, str2) dung de noi chuoi s1 + s2;
	strcat(s1, s2);
	printf("\nChuoi 1 sau khi dung ham strcat: \n%s", s1);
	// ham strlen(str1) dung de tinh kich thuoc chuoi;
	printf("\nKich thuoc cua chuoi 1 sau khi dung ham strcat: \n%ld\n", strlen(s1));
	// in ra chuoi in hoa
	for (int i = 0; i < strlen(s1); ++i)
	{
		if(s1[i] >=97 && s1[i]<=122){
			printf("%c",s1[i]-32);
		}	
	}
	printf("\n");
	// In ra chuoi dao nguoc;
	for(int i = strlen(s1) - 1; i >= 0; i--){
		printf("%c", s1[i]);
	}
	*/
	
	/*
		Mang 2 chieu
	*/
	char s3[4][20];
	for(int i = 0; i < 4; i++){
		printf("Nhap vao chuoi thu %d:", i);
		scanf("%s", s3[i]);
	}
	for(int i = 0; i < 4; i++){
		printf("Chuoi thu %d vua nhap la: %s\n", i, s3[i]);
	}
	inrachuoidainhat(s3, 4);
}
