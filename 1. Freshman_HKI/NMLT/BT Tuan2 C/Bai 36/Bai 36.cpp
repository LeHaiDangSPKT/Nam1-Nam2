#include <stdio.h>
#include <cmath>

void nhap(int &n, double &x);
double tinh(int n, double x);
void xuat(double tinh);

void main()
{
	int n;
	double x;
	nhap(n, x);
	double kq=tinh(n,x);
	xuat(kq);
}

void nhap(int &n, double &x)
{
	scanf("%d", &n);
	scanf("%lf", &x);
}

double tinh(int n, double x)
{	
	double a;
	if(x<0)
		return 0;
	else
	{
		a=0;
		for(int i=1; i<=n; i++)
			a=sqrt(x+a);
	}	
	return a;
}

void xuat(double tinh)
{
	if(tinh==0)
		printf("Khong hop le");
	else
		printf("%lf", tinh);
}
