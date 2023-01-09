#include <stdio.h>

void nhap(double &d, double &r);
double CV( double d, double r);
void xuat(double CV);

void main()
{
	double d,r;
	nhap(d,r);
	double kq=CV(d,r);
	xuat(kq);
}
void nhap(double &d,double &r)
{
	scanf("%lf%lf", &d,&r);
}
double CV(double d, double r)
{
	double t; 
	t=(d+r)*2;
	return t;
}
void xuat(double CV)
{
	printf("%lf", CV);
}