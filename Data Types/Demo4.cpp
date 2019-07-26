#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	double p, s;
	
	printf("Nhap vao do dai 3 canh de kiem tra: ");
	printf("\nCanh thu nhat: ");
	scanf("%d", &a);
	printf("\nCanh thu hai: ");
	scanf("%d", &b);
	printf("\nCanh thu ba: ");
	scanf("%d", &c);
	
	if((a+b)>c && (a+c)>b && (b+c)>a){
		printf("\nDay la 1 tam giac");
		p = (double)(a + b + c);
		printf("\n- Chu vi = %lf", p);
		double p2 = p/2;
		s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("\n- Dien tich = %lf", s);
	} else {
		printf("\nDay khong phai la 1 tam giac");
	}
}
