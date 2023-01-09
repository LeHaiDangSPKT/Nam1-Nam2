#include<stdio.h>
void nhap(int A[], int& n);
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

int tinh(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
				return A[i];
	}	
	return -1;
	
}
void xuat(int tinh)
{
	printf("%d", tinh);
}
