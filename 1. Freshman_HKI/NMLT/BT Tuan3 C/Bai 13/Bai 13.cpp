#include<stdio.h>
#include<cmath>
void nhap(double A[], int& n);
int tinh(double A[], int n);
void xuat(int tinh);

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

int tinh(double A[], int n)
{
	for (int i = n; i > 0; i--)
	{
		if ((A[i] > 0) && (floor(A[i]) - A[i] == 0))
			return A[i];
	}
	return -1;

}
void xuat(int tinh)
{
	printf("%d", tinh);
}
