#include<stdio.h>
#include<iostream>

int main(){
	int x = 10;
	int *p;
	
	// in ra gia tri cua x
	std::cout << x;
	printf("\n");
	// in ra dia chi cua x trong bo nho
	std::cout << &x;
	printf("\n");
	// gan dia chi cua x cho bien con tro p
	p = &x;
	// in ra dia chi bien con tro p
	std::cout << p;
	printf("\n");
	// in ra gia tri cua p
	std::cout << *p;
	printf("\n");
	// tang dia chi bien con tro p
	(*p)++; // x++
	std::cout << x;
	return 0;
}
