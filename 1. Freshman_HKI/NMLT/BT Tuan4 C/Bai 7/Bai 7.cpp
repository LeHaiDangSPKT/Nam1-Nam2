#include <stdio.h>
#define MAX 100
void nhap(int& x, int& y, double A[], int& n);
void xuat(int x, int y, double A[], int n);
void main()
{
	int x, y, n;
	double A[MAX];
	nhap(x, y, A, n);
	xuat(x, y, A, n);
}

void nhap(int& x, int& y, double A[], int &n)
{
	scanf("%d%d%d", &x, &y, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &A[i]);
	}
}

void xuat(int x, int y, double A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] >= x && A[i] <= y)
			printf("%.2lf  ", A[i]);
	}
}