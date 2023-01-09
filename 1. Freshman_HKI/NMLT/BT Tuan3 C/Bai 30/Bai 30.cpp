#include<stdio.h>
void nhap(double A[], int& n, double& x);
double tinh(double A[], int n, double x);
void xuat(double tinh);
void main()
{
	int n;
	double A[100], x;
	nhap(A, n, x);
	double kq = tinh(A, n, x);
	xuat(kq);
}
void nhap(double A[], int& n, double& x)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &A[i]);
	}
	scanf("%lf", &x);
}

double tinh(double A[], int n, double x)
{
	for (int i = n - 1; i > 0; i--)
	{
		if (A[i] < 0 && A[i] > x)
			return A[i];
	}
	return 0;
}
void xuat(double tinh)
{
	printf("%.2lf", tinh);
}
