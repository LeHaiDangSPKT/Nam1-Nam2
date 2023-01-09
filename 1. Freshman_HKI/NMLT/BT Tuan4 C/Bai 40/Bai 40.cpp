#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void tinh(int A[], int n);
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

void tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] > A[i])
			{
				int t = A[i];
					A[i] = A[j];
					A[j] = t;
			}
		}
	}
}

void xuat(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}