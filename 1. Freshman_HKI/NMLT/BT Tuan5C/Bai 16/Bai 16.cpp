#include<stdio.h>
void nhap(int A[][100], int& m, int& n);
void tim_vi_tri_max(int A[][100], int m, int n);


void main()
{
	int m, n, A[100][100];
	nhap(A,m,n);
	tim_vi_tri_max(A, m, n);
	
}
void nhap(int A[][100], int& m, int& n)
{
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
}
void tim_vi_tri_max(int A[][100], int m, int n)
{
	int max = A[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i][j] > max)
				max = A[i][j];
		}
	}
	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < n; l++)
		{
			if (A[k][l] == max)
				printf("%d%d ", k, l);
		}
	}
}


