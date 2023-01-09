#include<stdio.h>
void nhap(int A[], int& n);
double tinh(int A[], int n);
void xuat(double tinh);
int laNT(int A[], int n);
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
int laNT(int n)
{
	int d = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			d++;
	}
	if (d == 2)
		return 1;
	return 0;
}
double tinh(int A[], int n)
{
	int h = 0;
	double t = 0, kq = 0;
	for (int i = 0; i < n; i++)
	{
		if (laNT(A[i]))
		{
			h++;
			t += A[i];
		}
	}
	if (h > 0)
		kq = t/h;
	return kq;
}

void xuat(double tinh)
{
	printf("%.2lf", tinh);
}
