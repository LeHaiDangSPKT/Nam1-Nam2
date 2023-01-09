#include<stdio.h>
void nhap(int A[], int& n);
void xuatMang(int A[], int n);

void main()
{
	int n, A[100];
	nhap(A, n);
	xuatMang(A, n);
}
void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
void xuatMang(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}

