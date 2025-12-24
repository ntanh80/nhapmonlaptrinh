/*
Viet chuong trinh tinh chu vi va dien tich hinh chu nhat
*/
#include "stdio.h"

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	float cv = 2*(a+b);
	float dt = a * b;
	printf("%.2f\n", cv);
	printf("%.2f", dt);
}
