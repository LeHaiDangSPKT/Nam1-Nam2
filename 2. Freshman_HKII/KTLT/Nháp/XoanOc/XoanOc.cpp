#include <stdio.h>
#define N 100

void xuli(int a[][N], int n)
{
	int so = 1;
	int check =1;
	int h=n,c=n;
	while (so<=n*n)
	{
		for (int i = check; i<=c; i++)
			a[check][i] = so++;
		for (int i = check+1; i<=h; i++)
			a[i][c] = so++;
		for (int i = c-1; i>=check; i--)
			a[h][i] = so++;
		for (int i = h-1; i>=check+1; i--)
			a[i][check] = so++;
		check++; h--; c--;
	}
	//xuat
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=n; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[N][N], n;
	scanf("%d", &n);
	xuli(a, n);
	return 0;
}
