#include<stdio.h>
void nhap(int A[], int& n);
int check(int A[], int n);
void xuat(int check);

void main()
{
	int n, A[100];
	nhap(A, n);
	int kq = check(A, n);
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

int check(int A[], int n)
{
	int giam = 0;
	for (int i = 0; i+1 < n; i++)
	{
		if (A[i] > A[i + 1])
			giam++;
	}
	return giam;
}

void xuat(int check)
{
	if (check == 0)
		printf("Tang");
	else
		printf("Khong tang");
}
