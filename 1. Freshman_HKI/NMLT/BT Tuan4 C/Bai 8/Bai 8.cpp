#include <stdio.h>
#define MAX 100
void nhap(int& x, int& y, int A[], int& n);
void xuat(int x, int y, int A[], int n);
void main()
{
	int x, y, n, A[MAX];
	nhap(x, y, A, n);
	xuat(x, y, A, n);
}

void nhap(int& x, int& y, int A[], int& n)
{
	scanf("%d%d%d", &x, &y, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

void xuat(int x, int y, int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] >= x && A[i] <= y && A[i] % 2 == 0)
			printf("%d  ", A[i]);
	}
}