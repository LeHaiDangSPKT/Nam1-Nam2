#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void tinh(int A[], int &n);
void XoaPhanTu(int A[], int &n, int vitri);
void xuat(int A[], int n);
void main()
{
	int A[MAX], n;
	nhap(A, n);
	tinh(A, n);
	xuat(A, n);
}

void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
void XoaPhanTu(int A[], int &n, int vitri)
{
	for (int i = vitri; i < n; i++)
	{
		A[i] = A[i + 1];
	}
	n--;
}
void tinh(int A[], int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if (A[i] == A[j])
			{
				XoaPhanTu(A, n, j);
				i--;
			}
		}
	}
}
void xuat(int A[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		printf("%d  ", A[i]);
	}
}