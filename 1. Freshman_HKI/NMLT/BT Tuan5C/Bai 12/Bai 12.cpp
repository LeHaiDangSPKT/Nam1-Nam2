#include<stdio.h>
void nhap(int A[][20], int &m, int &n);
void xuat(int tinh);
int tinh(int A[][20], int m, int n);
void main()
{
	int m, n, A[20][20];
	nhap(A,m,n);
	int kq=tinh(A,m,n);
	xuat(kq);
	
}

void nhap(int A[][20], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}

int tinh(int A[][20], int m, int n)
{
	int tong=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			tong+=A[i][j];
		}
	}
	return tong;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
