#include<stdio.h>
#define N  100 

//int G[MAX][MAX], n, chuaxet[MAX]

void nhapdothi(int &n, int a[N][N])
{	
	FILE *f;
	f = fopen("GraphInput.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file doc !");
		return;
	}
	fscanf(f,"%d",&n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fscanf(f,"%d",&a[i][j]);
	fclose(f);
} 
//Duyet theo chieu sau
void DFS(int a[][N], int n)
{
	int cxet[N], nho[N], stt=0;
	for (int i = 0; i< n; i++)
	{
		for (int j=0; j<n;j++)
		{
			cxet[j]=a[i][j];
		}
		for (j=0; j<n; j++)
		{
			if (cxet[j]==1 && nho[stt-1]!=cxet[j])
			{	
				a[i][j]=0;
				a[j][i]=0;
				nho[stt]=j;
				stt++;
			}
		}
	}
	for (int h=0; h<n; h++)
	{
		printf("%d", nho[h]);
	}
}

void main()
{
	int n, a[N][N];
	nhapdothi(n,a);
	DFS(a,n);
}
	
 