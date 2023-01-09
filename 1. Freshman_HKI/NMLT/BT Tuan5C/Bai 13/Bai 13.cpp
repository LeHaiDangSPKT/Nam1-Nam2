#include<stdio.h>
void nhap(int A[][20], int &m, int &n);
int tinhtong(int A[][20], int m, int n);
int tinh(int A[][20], int m, int n, int B[][20], int g, int h);
void xuat(int tinh);
void main()
{
	int m, n, g, h, B[20][20], A[20][20];
	nhap(A,m,n);
	nhap(B,g,h);
	int kq=tinh(A,m,n, B,g,h);
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

int tinhtong(int A[][20], int m, int n)
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

int tinh(int A[][20], int m, int n, int B[][20], int g, int h)
{
	int a=tinhtong(A,m,n);
	int b=tinhtong(B,g,h);
	return a+b;
}
void xuat(int tinh)
{
	printf("%d", tinh);
}
