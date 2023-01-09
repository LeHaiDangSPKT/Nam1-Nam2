#include<stdio.h>
void nhap(double A[], int& n);
double tinh(double A[], int n);
void xuat(double tinh);
void main()
{
	int n;
	double A[100];
	nhap(A, n);
	double kq = tinh(A, n);
	xuat(kq);
}
void nhap(double A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &A[i]);
	}
}

double tinh(double A[], int n)
{
	double t = 0;
	for (int i = 0; i < n; i++)
	{
		t += A[i];
	}
	return t;
}

void xuat(double tinh)
{
	printf("%.2lf", tinh);
}
