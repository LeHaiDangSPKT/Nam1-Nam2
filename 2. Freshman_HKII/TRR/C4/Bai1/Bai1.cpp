#include <stdio.h>

# define N 100
void xuatdothi(int n, int a[N][N]);
void nhapdothi(int &n, int a[N][N]);
bool kiemtradothivohuong(int n, int a[N][N]);
bool kiemtradondothi(int n, int a[N][N]);
bool kiemtragiadothi(int n, int a[N][N]);
void bacdinh(int n,int a[N][N]);

int main()

{
	int n;
	int a[N][N];
	nhapdothi(n,a);
	xuatdothi(n,a);
	return 0;
	
}

	
void nhapdothi(int &n, int a[N][N])
{	
	FILE *f;
	f = fopen("text.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file !");
		return;
	}
	fscanf(f,"%d",&n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fscanf(f,"%d",&a[i][j]);
	fclose(f);
}

void xuatdothi(int n, int a[N][N])
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	if (kiemtradothivohuong(n,a)==true)
		printf(" VO HUONG\n");
	else 
		printf(" CO HUONG\n");

	if  (kiemtradondothi(n,a)==true)
		printf(" DON \n");
    else 
		printf(" DA \n");
	
	if (kiemtragiadothi(n,a)==true)	
		printf(" GIA DO THI \n");
	bacdinh(n,a);


}

bool kiemtradothivohuong(int n, int a[N][N])
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (a[i][j] != a[j][i])
				return false;
	return true;
}

bool kiemtradondothi(int n, int a[N][N])
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (a[i][j] > 1)
				return false;
	return true;
}

bool kiemtragiadothi(int n, int a[N][N])
{
	for (int i=0;i<n;i++)
		if (a[i][i]>0)
			return true;
	return false;
}

void bacdinh(int n,int a[N][N])
{
	int b[N];
	if (kiemtradothivohuong(n,a))
	{
	
		for (int i=0;i<n;i++)
		{
			int s=0;
			for (int j=0;j<n;j++)
				s+=a[i][j];
			b[i]=s;
		}
		for (int k=0;k<n;k++)
			printf("%d ",b[k]);
	}
	else
	{
		int vao[N],ra[N];
		for (int i=0;i<n;i++)
		{
			int svao=0,sra=0;
			for(int j=0;j<n;j++)
			{
				sra+=a[i][j];
				svao+=a[j][i];
			}
			ra[i]=sra;
			vao[i]=svao;
		}
		printf("Bac Vao : ");
		for (i=0;i<n;i++)
			printf("%d ",vao[i]);
		printf("\nBac Ra  : ");
		for (i=0;i<n;i++)
		{
			printf("%d ",ra[i]);
		}
		printf("\nBac     : ");
		for (i=0;i<n;i++)
		{
			printf("%d ",vao[i]+ra[i]);
		}
	}
}




































 
