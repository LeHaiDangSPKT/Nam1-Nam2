#include <stdio.h>
#include <cmath>

void nhap(float &a);
int tinh(float a, int &t);
void xuat(int tinh, int t);

void main()
{
	float a; int t;
	nhap(a);
	int kq=tinh(a,t);
	xuat(kq, t);
	scanf("%d");
}

void nhap(float &a)
{
	printf("Nhap so thuc a: ");
	scanf("%f", &a);
}

int tinh(float a, int &t)
{
	t=floor(a);
	float h;
	h=a-t;
	if (abs(h)>=0.5) 
		return 1;
	else 
		return 2;
}

void xuat(int tinh, int t)
{	
	if(tinh==1)
		printf("Gia tri sau khi lam tron la: %d", t+1);
	else 
		printf("Gia tri sau khi lam tron la: %d", t );
}

