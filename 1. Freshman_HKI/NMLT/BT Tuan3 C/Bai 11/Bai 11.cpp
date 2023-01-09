#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n);
void xuat(int tinh);
int laNT(int A[], int n);
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

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (laNT(A[i]))
			return A[i];
	}
	return -1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
