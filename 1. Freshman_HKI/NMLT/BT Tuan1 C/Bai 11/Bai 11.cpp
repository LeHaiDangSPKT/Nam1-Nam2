#include <stdio.h>
#include <cmath>

void nhap(float &a);
int rounding(float a);
void xuat(int rounding);

void main()
{
	float a;
	nhap(a);
	int kq=rounding(a);
	xuat(kq);
	scanf("%d");
}
void nhap(float &a)
{
	scanf("%f", &a);
}
int rounding(float a)
{
	int t; 
	t=floor(a);
	if ((a-t)==0)
		t=t-1;
	return t;
}
void xuat(int rounding)
{
	printf("%d", rounding);
}