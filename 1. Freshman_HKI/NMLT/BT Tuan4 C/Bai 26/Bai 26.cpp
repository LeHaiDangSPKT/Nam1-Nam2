#include <stdio.h>
#include <cmath>
#define MAX 100
void nhap(int A[], int& n);
int SCP(int A[], int n);
void tinh(int A[], int n, int &dem);
void xuat(int A[], int n, int dem);
void main()
{
	int A[MAX], n, dem;
	nhap(A, n);
	tinh(A, n, dem);
	xuat(A, n, dem);
}

void nhap(int A[], int& n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
}
int SCP(int n)
{
	int h = sqrt(n);
	if ((h * h) == n)
		return 0;
	else
		return 1;
}
void XoaPhanTu(int A[], int n, int vitri)
{
	for (int i = vitri; i < n; i++)
	{
		A[i] = A[i + 1];
	}
	n--;
}
void tinh(int A[], int n, int &dem)
{
	dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (SCP(A[i]) == 0)
		{
			dem++;
			XoaPhanTu(A, n, i);
			i--;
		}
	}
}
void xuat(int A[], int n, int dem)
{
	for (int i = 0; i < n - dem; i++)
	{
		printf("%d  ", A[i]);
	}
}