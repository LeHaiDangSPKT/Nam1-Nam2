#include <stdio.h>
#define N 100
void nhap(double a[N][N], int &m, int &n)
{
	scanf("%d%d", &m, &n);
	for (int i =0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
}
void duyet(double a[N][N], int m, int n)
{
	double nho[3];
	double min = 100000;
	int dem =0;
	for (int i =0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (((a[i][j] > a[i-1][j]) || (i == 0)) && ((a[i][j] > a[i+1][j]) || (i==m-1)) && ((a[i][j]>a[i][j-1]) || (j==0)) && ((a[i][j] > a[i][j+1])||(j==n-1)))
			{
				dem++;
				if (a[i][j] < min)
				{
					min = a[i][j];
					nho[0] = i;
					nho[1] = j;
				}	
			}
		}
	}
	if (dem==0)
		printf("-1");
	else
		printf ("%.0f %.0f", nho[0], nho[1]);
	
}
int main()
{
	int m, n;
	double a[N][N];
	nhap(a,m,n);
	duyet(a,m,n);
	return 0;
}

