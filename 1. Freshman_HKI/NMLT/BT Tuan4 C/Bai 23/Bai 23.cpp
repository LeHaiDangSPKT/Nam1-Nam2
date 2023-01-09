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
	for (int i = 1; i < n-1; i++)
	{
		if ((A[i] > A[i - 1] && A[i] > A[i + 1]) || (A[i] < A[i - 1] && A[i] < A[i + 1]))
			continue;
		else
			return 1;
	}
	return 0;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}