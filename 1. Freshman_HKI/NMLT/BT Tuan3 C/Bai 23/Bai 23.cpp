#include<stdio.h>
void nhap(int A[], int& n);
int UC(int a, int b);
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
int UC(int a, int b)
{
	for (int i = a; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int tinh(int A[], int n)
{
	int max = A[0];
	for (int i = 1; i  < n; i++)
	{
		max = UC(max, A[i]);
	}
	return max;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
