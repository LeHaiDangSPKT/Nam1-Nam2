#include <stdio.h>
#include <stdlib.h>
#include <cmath>
typedef struct THONGTIN
{
	double r, h;
}tt;
void nhap(tt &p);
void xuat(double t);
double S_xungquanh(tt p);
double S_toanphan(tt p);
double V(tt p);
void main()
{
	tt hinhtru;
	nhap(hinhtru);
	double kq1 = S_xungquanh(hinhtru);
	double kq2 = S_toanphan(hinhtru);
	double kq3 = V(hinhtru);
	xuat(kq1);
	xuat(kq2);
	xuat(kq3);
}

void nhap(tt &p)
{
	printf("Nhap ban kinh: ");
	scanf("%lf", &p.r);
	printf("Nhap chieu cao: ");
	scanf("%lf", &p.h);
}

void xuat(double t)
{
	printf("%.2lf", t);
}

double S_xungquanh(tt p)
{
	return 2*3.14*p.r*p.h;
}

double S_toanphan(tt p)
{
	double kq;
	kq = 2*3.14*p.r*p.h + 2*3.14*p.r*p.r;
	return kq;
}

double V(tt p)
{
	return 3.14*p.r*p.r*p.h;
}