#include <stdio.h>
#define N 100
void nhapmang(int a[][N], int &n)
{
	scanf("%d", &n);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
}
void chuyenmang(int a[][N], int b[], int n)
{
	int dem=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++) 
			b[dem++]=a[i][j];
}
void sapxeptang(int b[], int n)
{
	for (int i=0; i<n*n; i++)
		for (int j=i+1; j<n*n; j++)
			if (b[i]>b[j])
			{
				int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
			}
}
int duyet(int b[], int n)
{
	int dem = 0, max = 0, gt;
	for (int i = 0; i<n*n; i++)
	{
		if (b[i]==b[i+1])
		{
			dem++;
			if (dem>max)
			{
				max = dem;
				gt = b[i];
			}
				
		}
		else
			dem=0;
	}
	return gt;
}
int main()
{
	int a[N][N], b[N], n;
	nhapmang(a,n);
	chuyenmang(a,b,n);
	sapxeptang(b,n);
	int kq = duyet(b,n);
	printf("ket qua la: %d", kq);
	return 0;
}
