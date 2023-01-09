#include<stdio.h>
void nhap(int A[], int& n);
int timLe(int A[], int n);
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

int timLe(int n)
{
	int h;
	for (int i = n; i > 0; i /= 10)
	{
		h = i % 10;
	}
	if (h % 2 != 0)
		return 1;
	else
		return 0;
}

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (timLe(A[i]))
			return A[i];
	}
	return 0;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}