#include<stdio.h>
/*
	Ve hinh chu nhat rong voi chieu dai n, chieu rong m.
*/

int main(){
	int m, n;
	
	printf("Nhap vao kich thuoc cua hinh chu nhat: \n");
	printf("- Chieu rong: "); scanf("%d", &m);
	printf("- Chieu dai: "); scanf("%d", &n);
	
	for(int i = 0; i < m; i++){
		if(i == 0 || i == (m - 1)){
			for(int j = 0; j < n; j++){
				printf("*   ");
			}
			printf("\n");
		} else {
			for(int j = 0; j < n; j++){
				if(j == 0 || j == (n - 1)){
					printf("*   ");
				} else {
					printf("    ");
				}
			}
			printf("\n");
		}
	}
}
