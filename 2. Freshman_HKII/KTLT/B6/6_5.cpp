#include <stdio.h>
#define N 100
void nhap(int mtX[][N], int d, int c)
{
	for (int i=0; i<d; i++)
		for (int j=0; j<c; j++)
			scanf("%d", &mtX[i][j]);
}
int duyet(int mtA[][N], int mtB[][N], int mtC[][N], int dA, int cA, int dB, int cB)
{
	if (cA==dB)
	{
		for (int i=0; i<dA; i++)
			for (int j=0; j<cB; j++)
			{
				mtC[i][j]=0;
				for (int k=0; k<dB; k++)
					mtC[i][j] += mtA[i][k]*mtB[k][j];
			}
		return 0;
	}
	else
	{
		printf("Khong tinh duoc");
		return 1;
	}
		
}
void xuat(int mtX[][N], int dA, int cB)
{
	for (int i=0; i<dA; i++)
	{
		for (int j=0; j<cB; j++)
			printf("%d ", mtX[i][j]);
		printf("\n");
	}
		
}
int main()
{
	int mtA[N][N], mtB[N][N], mtC[N][N], n, dA, cA, dB, cB;
	printf("Nhap dong A va cot A: ");	scanf("%d%d", &dA, &cA);
	printf("Nhap dong B va cot B: ");	scanf("%d%d", &dB, &cB);
	nhap(mtA, dA, cA);
	nhap(mtB, dB, cB);
	int kq = duyet(mtA, mtB, mtC, dA, cA, dB, cB); 
	if (kq==0)
		xuat(mtC, dA, cB);
	return 0;
}
