#include<stdio.h>
void nhap(int A[], int& n);
int timGanh(int A[], int a);
int tinh(int A[], int n);
void xuat(int tinh);

void main()
{
	int n, A[100];
	nhap(A, n);
	int kq = tinh(A, n);
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

int timGanh(int n)
{
	int sum = 0;
	for (int i = n; i > 0; i /= 10)
	{
		int h = i % 10;
		sum = sum * 10 + h;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (timGanh(A[i]))
			return A[i];
	}
}

void xuat(int tinh)
{
	printf("%d", tinh);
}