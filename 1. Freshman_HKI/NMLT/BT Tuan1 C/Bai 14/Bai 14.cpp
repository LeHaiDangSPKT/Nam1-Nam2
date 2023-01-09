#include <stdio.h>
#include <cmath>

void nhap(float &a);
int tinh(float a);
void xuat(int tinh);

void main()
{
	float a;
	nhap(a);
	int kq=tinh(a);
	xuat(kq);
	scanf("%d");
}

void nhap(float &a)
{
	printf("Nhap mot so a bat ki: ");
	scanf("%f", &a);
}

int tinh(float a)
{	
	if (a>=0)
		a=floor(a);
	else
	{	
		a=ceil(a);
		a=abs(a);
	}
	return a;
}

void xuat(int tinh)
{
	if (tinh>=0 && tinh<=9) 
		printf("Gia tri cua a la: %d", tinh);
	else 
		printf("Khong doc duoc");
}