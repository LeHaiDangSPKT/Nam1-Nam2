#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
int tinh(int A[], int n);
void xuat(int tinh);
void main()
{
	int A[MAX], n;
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

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 ==1)
			return 0;
	}
	return 1;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}