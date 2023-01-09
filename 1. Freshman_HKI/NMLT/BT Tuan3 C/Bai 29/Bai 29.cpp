#include<stdio.h>
#include<cmath>
void nhap(double A[], int& n);
int tinh(double A[], int n, double& max, double& min);
void xuat(int max, int min);
void main()
{
	int n; 
	double A[100], max, min;
	nhap(A, n);
	int kq = tinh(A, n, max, min);
	xuat(max, min);
}
void nhap(double A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &A[i]);
	}
}

int tinh(double A[], int n, double& max, double& min)
{
	max = A[0];
	for (int i = 1; i < n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	min = A[0];
	for (int j = 1; j < n; j++)
	{
		if (A[j] < min)
			min = A[j];
	}
	max = ceil(max);
	min = floor(min);
	return 0;
}

void xuat(int max, int min)
{
	printf("%d ", min);
	printf("%d", max);
}
