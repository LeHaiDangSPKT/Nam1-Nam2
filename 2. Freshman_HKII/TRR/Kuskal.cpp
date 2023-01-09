#include <stdio.h>
#define N 100
void nhapmang(int a[][N], int &n)
{
	printf("Nhap n:"); scanf("%d", &n);
	printf("Nhap mang:");
	for (int i=0; i<n;i++)
		for (int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
}
void xuatmang(int tam[], int dem)
{
	for (int i=0; i<dem; i++)
		printf("%d  ", tam[i]);
}
void sapxep(int a[][N], int n, int tam[])
{
	int i = 0, j = 0;
	int dem = 0;
	for (i=0; i<n;i++)
		for (j=i+1;j<n;j++)
			if (a[i][j]!=0)
				tam[dem++]=a[i][j];	
	for (i=0; i<dem;i++)
		for (j=i+1;j<dem;j++)
			if (tam[j]<tam[i])
			{
				int temp = tam[i];
					tam[i]=tam[j];
					tam[j]=temp;
			}
}
int xettrung(int kiemtra[], int kt, int so)
{
	for (int k = 0; k<kt; k++)
		if (so==kiemtra[k])
			return 1;
	return 0;
}
void duyetmang(int a[][N], int n)
{
	int tam[N], kiemtra_i[N],kiemtra_j[N],t=0, kt_i=0, kt_j=0,check = 0;
	sapxep(a,n,tam);
	while (check<n)
	{
		int out = 0;
		for (int i=0; (i<n && out == 0);i++)
			for (int j=0;(j<n && out == 0);j++)
				if (tam[t]==a[i][j])
					if (i<j)
						if ((xettrung(kiemtra_i, kt_i, i)+xettrung(kiemtra_i, kt_i, j)!=2))
							if ((xettrung(kiemtra_i, kt_i, i)+xettrung(kiemtra_j, kt_j, j)!=2)||(xettrung(kiemtra_i, kt_i, j)+xettrung(kiemtra_j, kt_j, i)!=2))  
							{
								printf("%d\n", tam[t]);
								kiemtra_i[kt_i++]=i;
								kiemtra_j[kt_j++]=j;
								t++;
								check++;
								out=1;
							}
							else
								t++;
	}
//	xuatmang(tam, dem);
}
int main()
{
	int a[N][N], n;
	nhapmang(a,n);
	duyetmang(a,n);
}
/*
0 10 0 0 0 4 20
10 0 1 0 7 0 0
0 1 0 5 0 0 0
0 0 5 0 6 0 0
0 7 0 6 0 9 8
4 0 0 0 9 0 0
20 0 0 0 8 0 0*/

