#include<stdio.h>
void nhap(int A[][100], int& m, int& n);
void DSCTB(int A[][100], int m, int n);


void main()
{
	int m, n, A[100][100];
	nhap(A,m,n);
	DSCTB(A, m, n);
	
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
void DSCTB(int A[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j == 0 || j == n - 1) && (A[i][j] % 2 == 0))
				dem++;
		}
	}
	printf("%d", dem);
}


