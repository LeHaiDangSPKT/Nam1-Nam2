#include<stdio.h>
void nhap(int A[], int& n);
double tinh(int A[], int n);
void xuat(double tinh);
void main()
{
	int n, A[100];
	nhap(A, n);
	double kq = tinh(A, n);
	xuat(kq);
}
void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
double tinh(int A[], int n)
{
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		t += A[i];
	}
	double kq = double(t) / n;
	return kq;
}

void xuat(double tinh)
{
	printf("%.2lf", tinh);
}
