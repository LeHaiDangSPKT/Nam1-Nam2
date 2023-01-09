#include <stdio.h>

int main()
{
	int a[100][100], b[200];
	int i,j, n, m, dem;
	scanf("%d%d", &n,&m);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
			scanf("%d", &a[i][j]);
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			b[dem] = a[i][j];
			dem++;
		}
	}
	for (i=0; i<m*n; i++)
		printf("%d ", b[i]);
	return 0;
}
