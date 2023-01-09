#include <stdio.h>

# define N 100
void xuatdothi(int n, int a[N][N]);
void nhapdothi(int &n, int a[N][N]);
bool kiemtradothivohuong(int n, int a[N][N]);
bool kiemtradondothi(int n, int a[N][N]);
bool kiemtragiadothi(int n, int a[N][N]);
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
	f = fopen("testin.txt","rt");
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

void xuatdothi(int n, int a[N][N])
{
	FILE *f;
	f= fopen("testout.txt", "wt");
	if(f==NULL)
	{
		printf("khong mo dc file ghi !");
		return;
	}
	
	fprintf(f, "%d \n", n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
			fprintf(f,"%d ",a[i][j]);
		fprintf(f,"\n");
	}
	
	if  (kiemtradondothi(n,a))
		fprintf(f, "DON ");
    else 
		fprintf(f, "DA ");
		
	fprintf(f, "DO THI");
		
	if (kiemtradothivohuong(n,a))
		fprintf(f, " VO HUONG\n");
	else 
		fprintf(f, " CO HUONG\n");
	
	if (kiemtragiadothi(n,a))	
		fprintf(f, " GIA DO THI \n");
		
	int b[N];
	if (kiemtradothivohuong(n,a))
	{
		for (i=0;i<n;i++)
		{
			int s=0;
			for (int j=0;j<n;j++)
				s+=a[i][j];
			b[i]=s;
		}
		fprintf(f, "Bac Dinh: ");
		for (int k=0;k<n;k++)
			fprintf(f, "%d ",b[k]);
	}
	else
	{
		int vao[N],ra[N];
		for (i=0;i<n;i++)
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
		fprintf(f, "Bac Vao  : ");
		for (i=0;i<n;i++)
			fprintf(f,"%d ",vao[i]);
		fprintf(f, "\nBac Ra   : ");
		for (i=0;i<n;i++)
		{
			fprintf(f,"%d ",ra[i]);
		}
		fprintf(f, "\nBac Dinh : ");
		for (i=0;i<n;i++)
		{
			fprintf(f, "%d ",vao[i]+ra[i]);
		}
	}
	
	if(kiemtradothivohuong(n, a))
	{
		int danhdau[N],ptlt[N], slt=0;
		int lienthong[N][N];
		for(i=0; i<n; i++)
		{
			danhdau[i]=0;
		}
		for(i=0; i<n; i++)
		{
			if(danhdau[i]==0) 
			{
				slt++;
				int k=1;
				lienthong[slt][0]=i;
				danhdau[i]=1;
				while(danhdau[i]==1)
				{
					for(int j=0; j<n; j++)
					{
						if(a[i][j]==1 && danhdau[j]==0)
						{
							lienthong[slt][k]=j;
							danhdau[j]=1;
							k++;
						}
					}
					danhdau[i]=2;
					for(j=0; j<n; j++)
					{
						if(danhdau[j]==1) 
						{
							i=j;
						}
					}
				}
				ptlt[slt]=k;
			}
		}
		if(slt==1) fprintf(f,"\nDO THI LIEN THONG");
		else
		{
			fprintf(f,"\nDO THI CO %d LIEN THONG", slt);
			for(i=1; i<=slt; i++)
			{
				fprintf(f, "\n lien thong thu %d gom: ",i);
				for(int j=0; j<ptlt[i]; j++)
					fprintf(f, "%d ", lienthong[i][j]);
			}
		}
	}
	else
	{
		int danhdau[N],s=0;
		for(int t=0; t<n; t++)
		{
			int k=1;
			for(int j=0; j<n; j++)
			{
				danhdau[j]=0;
			}
			danhdau[t]=1;
			while(danhdau[t]==1)
			{
				for(j=0; j<n; j++)
				{
					if(a[t][j]==1 && danhdau[j]==0)
					{
						danhdau[j]=1;
						k++;
					}
				}
				danhdau[t]=2;
				for( j=0; j<n; j++)
				{
					if(danhdau[j]==1) 
					{
						i=j;
						
					}
				}
			}
			if(k==n) s++;
		}
		if(s==5) fprintf(f,"\nDO THI LIEN THONG MANH");
		else
		{
			for(i=0; i<n; i++)
				for(int j=0; j<n; j++)
				{
					if(a[i][j]==1) a[j][i]=1;
				}
			int k=1, i=0;
			for(int j=0; j<n; j++)
			{
				danhdau[j]=0;
			}
			danhdau[0]=1;
			while(danhdau[i]==1)
			{
				for( j=0; j<n; j++)
				{
					if(a[i][j]==1 && danhdau[j]==0)
					{
						danhdau[j]=1;
						k++;
					}
				}
				danhdau[i]=2;
				for(j=0; j<n; j++)
				{
					if(danhdau[j]==1) 
					{
						i=j;
					}
				}
			}
			if(k==n) fprintf(f, "\nDO THI LIEN THONG YEU");
			else fprintf(f,"\nDO THI KO LIEN THONG");
		}
	}
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

