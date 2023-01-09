
#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void tinh(int A[], int n, int C[]);
void xuat(int C[], int n);
void main()
{
	int A[MAX], n, C[MAX];
	nhap(A, n);
	tinh(A, n, C);
	xuat(C, n);
}

void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

void tinh(int A[], int n, int C[])
{
	int end = n - 1;
	for (int i = 0; i < n; i++)
	{
		C[end] = A[i];
		end--;
	}
}
void xuat(int C[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d  ", C[i]);
	}
}