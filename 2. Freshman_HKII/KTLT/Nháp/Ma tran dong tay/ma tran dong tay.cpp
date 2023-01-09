#include <stdio.h>
#define N 100

void xuli(int a[][N], int n)
{
	int x = (n/2)+1;
	int y = (n/2)+2;
	unsigned int so = 1;
	while(so <= (n*n))
	{
		a[x][y] = so; 
		x--;
		y++;
		if (so%n==0)
		{
			x++;
			y++;
			if (y==n+1)
				y=1;
			else if (y==n+2)
				y=2; 
		}
		else if (x>=1 && y>n)
			y=1;
		else if (x<1 && y<=n)
			x=n;
		so++;
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
