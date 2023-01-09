#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n, int& min, int& max );
void xuat(int max, int min);
void main()
{
	int n, A[100], max, min;
	nhap(A, n);
	int kq = tinh(A, n, max, min );
	xuat(max, min);
}
void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}

int tinh(int A[], int n, int& max, int& min )
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
	return 0;
}

void xuat(int max, int min)
{
	printf("%d ", max);
	printf("%d", min);
}
