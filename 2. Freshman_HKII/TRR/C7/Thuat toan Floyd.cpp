#include <stdio.h>
#include <stdlib.h>
#define MAX 10000 
int nhap(int A[][100], int &n, int &u, int &v)
{
	
	FILE *fi;
	fi = fopen("input.txt","rt");
	if (fi==NULL)
	{
		printf("Khong mo dc file doc !");
		return 0;
	}
	fscanf(fi, "%d%d%d", &n,&u,&v);
	for (int i = 1; i<=n; i++)
		for (int j=1; j<=n; j++)
		{
			fscanf(fi, "%d", &A[i][j]);
			if (i != j && A[i][j] == 0)
			    A[i][j] = MAX;
		}
	fclose(fi);
}

int xuat(int A[][100], int D[][100], int S[][100], int n, int u, int v)
{
	FILE *fo;
	fo= fopen("output.txt", "wt");
	if(fo==NULL)
	{
		printf("khong mo dc file ghi !");
		return 0;
	}
	if (D[u][v] >= MAX) 
		fprintf(fo,"Khong co duong di");
	else
	{
		fprintf(fo,"Duong di ngan nhat tu dinh %d den dinh %d la: %d\n", u, v, D[u][v]);
		fprintf(fo,"Duong di: %d", u);
		while (u!=v)
		{
			fprintf(fo, "--> %d", S[u][v]);
			u = S[u][v];
		}
	}
	fclose(fo);
}
void duyet(int A[][100], int D[][100], int S[][100], int n)
{
	int i, j, k, found;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			D[i][j] = A[i][j];	
			if (D[i][j] == MAX) 
				S[i][j] = 0;
			else 
				S[i][j] = j;
		}

	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (D[i][k] != MAX && D[i][j] > (D[i][k] + D[k][j]))
				{
	    			D[i][j] = D[i][k] + D[k][j];
				    S[i][j] = S[i][k];
				}
}
int main()
{
	int A[100][100], D[100][100], S[100][100];
	int n,u,v;	
	nhap(A,n,u,v);
 	duyet(A,D,S,n);
	xuat(A,D,S,n,u,v);
 	return 0;
}
