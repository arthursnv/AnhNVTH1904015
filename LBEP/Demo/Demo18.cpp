#include<stdio.h>
#include<string.h>
#

/*
	Advanced Data Types
*/

/*
struct Student{
	char s_name[50];
	char s_age[10];
	char s_phone[15];
	char s_grade[10];
} student1;

int main(){
	struct Student student2;
	strcpy(student2.s_name, "Nguyen Viet Anh");
	strcpy(student2.s_age, "26");
	strcpy(student2.s_phone, "0986389267");
	strcpy(student2.s_grade, "1");
	
	puts(student2.s_name);
	puts(student2.s_age);
	puts(student2.s_phone);
	puts(student2.s_grade);
	
	return 0;
}
*/

typedef struct Student{
	char s_name[50];
	int s_age;
	char s_phone[15];
	int s_grade;
}Student;

int main(){
	Student stu_arr[25];
	// Nhap cac thong tin sinh vien tu ban phim va in ra man hinh
	int i = 0;
	char choose[10], temp[10];
	strcpy(choose, "Y");
	strcpy(temp, "Y");
	int status;
	do {
		printf("Nhap vao ten cua sinh vien thu %d: ", i + 1);
		scanf("%s", stu_arr[i].s_name);
		printf("Nhap vao tuoi cua %s: ", stu_arr[i].s_name);
		scanf("%d", &stu_arr[i].s_age);
		printf("Nhap vao so dien thoai cua %s: ", stu_arr[i].s_name);
		scanf("%s", stu_arr[i].s_phone);
		printf("Nhap vao diem cua %s: ", stu_arr[i].s_name);
		scanf("%d", &stu_arr[i].s_grade);
		i++;
		printf("Ban co muon tiep tuc nhap khong? (Y/N)\n");
		scanf("%s", temp);
		status = strcmp(choose, temp);
		printf("---\n");
	} while(status == 0 && i < 25);
	
	printf("\nDanh sach sinh vien: \n");
	for(int j = 0; j < i; j++){
		printf("%s: %d, %s, %d\n", stu_arr[j].s_name, stu_arr[j].s_age, stu_arr[j].s_phone, stu_arr[j].s_grade);
	}
}
