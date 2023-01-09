#include <stdio.h>
#define N 100

//m: hang;   n: cot;
void duyet(int a[][N], int dong, int m, int n)
{
	int p;
	int max = a[dong][0];
	p=0;
	for (int i=1; i<m; i++)
		if (a[dong][i]>max)
		{
			max = a[dong][i];
			p=i;
		}
			
	int check = 0;
	for (int i=0; i<n; i++)
		if (max>a[i][p])
			check++;
	if (check==0)
		printf("%d ", max);
}
int main()
{
	int m, n, a[N][N];
	scanf("%d%d", &m, &n);
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	for (int i=0; i<m; i++)
		duyet(a, i, m, n);
	return 0;
}
