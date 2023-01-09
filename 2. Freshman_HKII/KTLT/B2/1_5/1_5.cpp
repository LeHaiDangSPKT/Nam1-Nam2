#include <stdio.h>

int main()
{
	int a[200], b[100][100];
	int i,j, n, m, dem=0;
	scanf("%d%d", &n,&m);
	for (i=0; i<m*n; i++)
		scanf("%d", &a[i]);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			b[i][j] = a[dem];
			dem++;
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	return 0;
}
