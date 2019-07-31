#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	double x;
	
	double delta;
	
	printf("Cho phuong trinh bac 2 dang: ax2 + bx + c = 0");
	printf("\nThay vao a, b va c de tim ra nghiem x.\n");
	printf("\nNhap a = "); scanf("%d", &a);
	if (a!=0){
		printf("\nNhap b = "); scanf("%d", &b);
		printf("\nNhap c = "); scanf("%d", &c);
		printf("\n%dx2 + %dx + c = 0 (*)\n----- ----- -----", a, b, c);
		printf("\nKet qua: \n\n");
		
		delta = (double)b*b - 4*a*c;
		//printf("%.1lf", delta);
			
		if(delta < 0){
			printf("\nPhuong trinh (*) vo nghiem");
		} else if (delta == 0){
			x = (double)(-1)*b/a/2;
			printf("\nPhuong trinh (*) co nghiem kep: x = %.1lf", x);
		} else if (delta > 0){
			if((a + b + c) == 0){
				printf("\nPhuong trinh (*) co 2 nghiem la: ");
				printf("\n(1) x = 1");
				double x2 = (double)c/a;
				printf("\n(2) x = %.1lf", x2);
			} else if((a - b + c) == 0){
				printf("\nPhuong trinh (*) co 2 nghiem phan biet la: ");
				printf("\n(1) x = -1");
				double x2 = (double)(-1)*c/a;
				printf("\n(2) x = %.1lf", x2);
			} else {
				printf("\nPhuong trinh (*) co 2 nghiem phan biet la: ");
				double x1 = (double)(-1*b + sqrt(delta))/(2*a);
				printf("\n(1) x = %.1lf", x1);
				double x2 = (double)(-1*b - sqrt(delta))/(2*a);
				printf("\n(2) x = %.1lf", x2);
			}
		}
	} else {
		printf("Vui long nhap gia tri a khac 0 va thu lai.");
	}
}
