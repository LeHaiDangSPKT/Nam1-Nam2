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
	
	double sum=1;
	for (int i=1; i<=n; i++)
	{
		int h=1;
		for(int j=1; j<=i; j++)
		{
			h=h*j;
		}
		sum+=(pow(x,i))/(h);
	}
	return sum;
}

void xuat(double tinh)
{
	printf("%lf", tinh);
}
