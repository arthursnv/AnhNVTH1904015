#include<stdio.h>
/*
	Tinh tong cua n so le lon hon 0 dau tien;
*/

int main(){
	int n;
	int s = 0;
	int count = 0;
	int i = 1;
	
	printf("Tinh tong cua n so le lon hon 0 dau tien.\n--- --- ---\n");
	printf("n = "); scanf("%d", &n);
	
	do{
		if(i % 2 != 0){
			s += i;
			count++;
		}		
		i++;
	} while(count!=n);
	printf("\nTong cua 100 so le lon hon 0 dau tien la: S = %d", s);
}
