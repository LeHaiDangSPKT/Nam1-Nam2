#include <stdio.h>
#define N 100
void nhapmang(int a[][N], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
int UCLN(int a, int b)
{
	while (a!=b)
	{
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main()
{
	int a[N][N], n;
	nhapmang(a,n);
	int kq = UCLN (a[0][0], a[0][1]);
	int i = 0,j=0;
	for (i=0; i<n; i++)
	{
		if (i==0)
			j=2;
		else
			j=0;
		for (j; j<n-1; j++)
			 kq = UCLN(kq, a[i][j]);
	}
	printf("Ket qua la: %d", kq);
	return 0;
}
