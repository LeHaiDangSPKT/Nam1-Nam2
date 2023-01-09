#include<stdio.h>
void nhap(int A[][20], int &m, int &n);
void cheochinh(int A[][20], int m, int n, int B[]);
void sapxep(int B[], int m);
void thayvitri(int A[][20], int m, int n, int B[]);
void xuat(int A[][20], int m, int n);
void main()
{
	int m, n, A[20][20], B[20];
	nhap(A,m,n);
	cheochinh(A,m,n,B);
	sapxep(B,m);
	thayvitri(A,m,n,B);
	xuat(A,m,n); 
/*	for (int i=0; i<n;i++)
	{
	  printf("%d ",B[i]);
	}
	for (int j=0; j<m;j++)
	{
	  printf("%d ",C[j]);
	}
*/
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

void cheochinh(int A[][20], int m, int n, int B[])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{	
			if(i==j)
				B[i]=A[i][j];
		}
	}
}
void sapxep(int B[], int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m ; j++)
		{
			if (B[i] > B[j])
			{
				int t = B[i];
				B[i] = B[j];
				B[j] = t;
			}
		}
	}
}
void thayvitri(int A[][20], int m, int n, int B[])
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{	
			if(i==j)
				A[i][j]=B[i];
		}
	}
}
void xuat(int A[][20], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}	
}
