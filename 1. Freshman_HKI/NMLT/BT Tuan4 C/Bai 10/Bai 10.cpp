#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
void tinh(int A[], int n);
void main()
{
	int A[MAX], n;
	nhap(A, n);
	tinh(A, n);
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
		if (A[i]*A[i+1] < 0 || A[i]*A[i-1] < 0)
			printf("%d  ", A[i]);
	}
}