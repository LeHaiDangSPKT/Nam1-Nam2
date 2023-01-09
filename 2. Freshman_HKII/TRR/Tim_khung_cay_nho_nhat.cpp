#include <stdio.h>
#define N 100
void nhapmang(int a[][N], int n)
{
	printf("Nhap phan tu:\n");
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
void xoa(int b[], int &dem, int vitri)
{
	for(int i = vitri ; i < dem; i++)
        b[i] = b[i+1];
	dem--;
}

int xetmin(int b[N], int &dem, int &min)
{
	int check = 0;
	for (int i=1; i<dem; i++)
		if (b[i]<min)
		{
			min = b[i];
			check = i;
		}
	printf("%d\n", min);
	//Xoa phan tu min trong mang b
	xoa(b,dem,check);	
	
	return min;
}
int ktr(int so, int toado[N], int count)
{
	for (int i=0; i<count;i++)
	{
		if (toado[i]==so)
			return 0;
	}
	return 1;
}
void xuatmang(int a[][N], int n, int b[], int dem)
{
	int d;
/*	for (int i=0; i< n;i++)
	{
		for (int j=0; j<n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");*/
	for (int i=0; i<dem; i++)
		printf("%d ", &b[i]);
	printf("\n");
	scanf("%d", &d);
}
int duatrongso(int a[][N],int n, int b[N], int dinh, int &dem, int toado[N], int &count, int dau[])
{
	for (int i=0; i<n; i++)
		if (a[dinh][i]!=0)
		{
			if (ktr(dinh, toado, count)==0 && ktr(i, toado, count)==0)
			{
				for (int j=0; j<dem; j++)
					if (a[dinh][i]==b[j])
						xoa(b,dem,j);
				a[dinh][i]=0;
				a[i][dinh]=0;	
			}
			else
				b[dem++]=a[dinh][i];
		}		
//	xuatmang(a,n,b,dem);
	dau[dinh]=0;
	int min = b[0];
	int kq = xetmin(b,dem,min);
//Danh 0 trong so vua in ra	 va phan tu trung
	for (int i=0; i<n; i++)
	{
		if (a[dinh][i]==kq)
		{
			a[dinh][i]=0;
			a[i][dinh]=0;
			toado[count++]=dinh;
			toado[count++]=i;
		//	xuatmang(a,n,b,dem);
			return i; 
		}
		else
		{
			for (int i=0; i<n; i++)
				for (int j=0; j<n; j++)
					if (a[i][j]==kq && dau[i]==0)
					{
					//	xuatmang(a,n,b,dem);
						a[i][j]=0;
						a[j][i]=0;
						toado[count++]=j;
						toado[count++]=i;
						return j;
					}		
		}
	}
}
void xet(int a[][N], int b[N], int dinh, int n, int &check, int &dem, int toado[N], int count, int dau[])
{
	while (check<n-1)
	{
		check++;
		int kq1 = duatrongso(a, n, b, dinh, dem, toado, count, dau);
	//	int kq3 = laydinhke(a,kq, dau);
		xet(a, b, kq1, n, check, dem, toado, count, dau);
	}
}
int main()
{
	int check = 0, dem = 0, count =0, dinh, n;
	int a[N][N], b[N], toado[N], dau[N];
	printf("Nhap n: "); scanf("%d", &n);
	nhapmang(a, n);
	printf("Chon dinh bat dau: "); scanf("%d", &dinh);
	//Danh dau
	for (int i=0; i<n; i++)
		dau[i]=1;
	xet(a, b, dinh, n, check, dem, toado, count, dau);
	return 0;
}


