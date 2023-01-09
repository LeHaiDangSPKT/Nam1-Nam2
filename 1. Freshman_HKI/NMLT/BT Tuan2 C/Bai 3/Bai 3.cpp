#include <stdio.h>

void nhap(int &n);
double tinh(int n);
void xuat(double tinh);


void main()
{
	int n;
	nhap(n);
	double kq=tinh(n);
	xuat(kq);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

double tinh(int n)
{
	double sum=0;
	for(int i=1; i<=n; i++)
		sum+=(1/(double)i);
	return sum;
}

void xuat(double tinh)
{
	printf(" %lf", tinh);
}