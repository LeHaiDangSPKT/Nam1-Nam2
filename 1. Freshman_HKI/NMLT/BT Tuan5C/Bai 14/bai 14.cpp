#include<stdio.h>
void nhap(int A[][20], int &m, int &n);
void tonghang(int A[][20], int m, int n);
void tongcot(int A[][20], int m, int n);
void cheochinh(int A[][20], int m, int n);
void cheophu(int A[][20], int m, int n);
void main()
{
	int m, n, A[20][20];
	nhap(A,m,n);
	tonghang(A,m,n);
	tongcot(A,m,n);
	cheochinh(A,m,n);
	cheophu(A,m,n);
	
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

void tonghang(int A[][20], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		int tong=0;
		for(int j=0; j<n; j++)
		{
			tong+=A[i][j];
		}
		printf("%d ",tong);
	}
}

void tongcot(int A[][20], int m, int n)
{
	for(int j=0; j<n; j++)
	{
		int tong=0;
		for(int i=0; i<m; i++)
		{
			tong+=A[i][j];
		}
		printf("%d ",tong);
	}
}

void cheochinh(int A[][20], int m, int n)
{
	int tong=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{	
			if(i==j)
				tong+=A[i][j];
		}
	}
	printf("%d ",tong);
}

void cheophu(int A[][20], int m, int n)
{
	int tong=0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{	
			if((i+j)==n-1)
				tong+=A[i][j];
		}
	}
	printf("%d ",tong);
}

