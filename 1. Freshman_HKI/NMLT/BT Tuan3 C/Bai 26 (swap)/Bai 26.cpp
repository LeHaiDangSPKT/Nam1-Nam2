#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n, int& max, int& min, int& h1, int& h2);
void swap(int a, int b);
void xuat(int A[], int n, int max, int min, int h1, int h2);
void main()
{
	int n, A[100], max, min, h1, h2;
	nhap(A, n);
	int kq = tinh(A, n, max, min, h1, h2);
	xuat(A, n, max, min, h1, h2);
}
void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
void swap(int& a, int& b)
{
	int t = a;
		a = b;
		b = t;
}

int tinh(int A[], int n, int& max, int& min, int& h1, int& h2)
{
	max = A[0];
	h1 = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			h1 = i;
		}
	}
	min = A[0];
	h2 = 0;
	for (int j = 1; j < n; j++)
	{
		if (A[j] < min)
		{
			min = A[j];
			h2 = j;
		}
	}
	return 0;
}

void xuat(int A[], int n, int max, int min, int h1, int h2)
{
	printf("%d ", max);
	printf("%d\n", min);
	swap(A[h1], A[h2]);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
}
