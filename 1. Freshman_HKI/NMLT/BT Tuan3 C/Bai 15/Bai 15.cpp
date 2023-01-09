#include<stdio.h>
void nhap(int A[], int& n);
int tinh(int A[], int n);
void xuat(int tinh);
int laHH(int A[], int n);
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
int laHH(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}

int tinh(int A[], int n)
{
	for (int i = n; i > 0; i--)
	{
		if (laHH(A[i]))
			return A[i];
	}
	return -1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
