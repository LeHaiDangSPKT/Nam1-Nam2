#include <stdio.h>
#define MAX 100
void nhap(int A[], int& n);
int timMax(int A[], int n);
void XoaPhanTu(int A[], int& n, int timMax);
int tinh(int A[], int n);
void xuat(int tinh);
void main()
{
	int A[MAX], n;
	nhap(A, n);
	int max = timMax(A, n);
	XoaPhanTu(A, n, max);
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

int timMax(int A[], int n)
{
	int max = A[0], dem = 0;
	for (int i = 1; i < n; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
			dem++;
		}
	}
	return dem;
}

void XoaPhanTu(int A[], int& n, int timMax)
{
	for (int i = timMax; i < n - 1; i++)
	{
		A[i] = A[i + 1];
	}
	n--;
}

int tinh(int A[], int n)
{
	int h = timMax(A, n);
	return A[h];
}

void xuat(int tinh)
{
	printf("%d", tinh);
}





