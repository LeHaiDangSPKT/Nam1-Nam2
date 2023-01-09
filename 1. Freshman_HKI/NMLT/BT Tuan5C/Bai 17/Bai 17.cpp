#include<stdio.h>
void nhap(int A[][100], int& m, int& n);
void tim_vi_tri_NT(int A[][100], int m, int n);
int laNT(int a);


void main()
{
	int m, n, A[100][100];
	nhap(A,m,n);
	tim_vi_tri_NT(A, m, n);
	
}
int laNT(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
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
void tim_vi_tri_NT(int A[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (laNT(A[i][j]) == 1)
			{
				dem++;
				printf("%d%d", i, j);
				break;
			}
		}
		if (dem != 0)
			break;
	}
}


