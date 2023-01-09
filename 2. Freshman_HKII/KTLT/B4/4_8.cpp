#include <stdio.h>
#define N 100
void nhapmang(int a[][N], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
int laNT(int so)
{
	int check = 0;
	if (so==0 || so==1)	return 0;
	else
	{
		for (int i=1; i<so; i++)
			if (so%i==0)
			{
				check++;
				if (check==2)
					return 0;
			}
		return 1;
	}
}
int main()
{
	int a[N][N], b[N], n, dem=0;
	nhapmang(a,n);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if (laNT(a[i][j])==1)
				b[dem++]=a[i][j];	
				
	int min = b[0];
	for (int i=1; i<dem; i++)
		if (b[i]<min)
			min=b[i];
	printf("Ket qua la: %d", min);
	return 0;
}
