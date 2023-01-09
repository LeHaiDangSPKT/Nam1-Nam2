#include<stdio.h>

struct canh
{
	int s,e,ts;
};

void doivitri(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

bool kiemtra(int c[], int x, int a)
{
	for(int i=0; i<x; i++)
		if(a==c[i]) 
			return true;
	return false;
}

void nhap(int &n, int a[][100])
{
	FILE *f;
	f = fopen("Dothikruskal.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file !");
		return ;
	}
	
	fscanf(f,"%d", &n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		fscanf(f,"%d", &a[i][j]);
	}
	fclose(f);
}

void tinh(int n, int a[][100], int b[][100])
{
	canh canh[100];
	int u=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(a[i][j]!=0)
			{
				canh[u].s=i;
				canh[u].e=j;
				canh[u].ts=a[i][j];
				u++;
			}
		}	
	}
	//Sap xep lai mang trong so mot chieu
    for(int i = 0; i < u-1; i++)
	{
        for(int j = i + 1; j < u; j++)
		{
            if(canh[i].ts > canh[j].ts)
			{
				doivitri(canh[i].s, canh[j].s);
				doivitri(canh[i].e, canh[j].e);
				doivitri(canh[i].ts, canh[j].ts);
        	}
        }
	}	
	int stack[100][100], ind[100]={0},s,e, k=1, f=1;
	stack[0][0]=canh[0].s;
	stack[0][1]=canh[0].e;
	ind[0]=2;
	int re[100], r=1;
	re[0]=0;
	while(f<u)
	{
		s=-1;
		e=-2;
		for(int i=0; i<k; i++)
			if(ind[i]>0)
			{
				if(kiemtra(stack[i],ind[i],canh[f].s)) s=i; 
				if(kiemtra(stack[i],ind[i],canh[f].e)) e=i;
			}	
		if(s!=e)
		{
			if(s==-1)
			{	
				if(e==-2)
				{
					ind[k]+=2;
					stack[k][0]=canh[f].s;
					stack[k][1]=canh[f].e;
					k++;
					re[r]=f;
					r++;
				}
				else 
				{
					stack[e][ind[e]]=canh[f].s;
					ind[e]++;
					re[r]=f;
					r++;
				}
			}
			else 
			{
				if(e==-2)
				{
					stack[s][ind[s]]=canh[f].e;
					ind[s]++;
					re[r]=f;
					r++;
				}
				else
				{
					for(int i=0; i<ind[e]; i++)
						stack[s][i+ind[s]]=stack[e][i];
					ind[s]+=ind[e];
					ind[e]=-1;
					re[r]=f;
					r++;
				}
			}
		}
		f++;
	}
	printf("F={ ");
	for(int i=0; i<r; i++)
		printf("(%d, %d) ", canh[re[i]].s+1, canh[re[i]].e+1);
	printf("}\nTrong so: ");
	for(int i=0; i<r; i++)
		printf("%d ", canh[re[i]].ts);
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			for(int k=0; k<r; k++)
				if(i==canh[re[k]].s && j==canh[re[k]].e) 
				{
					b[i][j]=1;
					b[j][i]=1;
				}
	b[n][0]=canh[re[0]].s;
}

void trungtu(int x, int b[][100], int n, int dau[])
{
	int s=0,a;
	for(int i=0; i<n; i++)
		s+=b[x][i];
	if(s==1)
	{
		printf("%d ", x+1);
		dau[x]=1;
	}
	else
	{
		dau[x]=1;
		for(int i=0; i<n; i++)
			if(b[x][i]==1 && dau[i]==0)
			{
				a=i;
				break;
			}
		trungtu(a,b,n,dau);
		printf("%d ", x+1);
		for(int i=0; i<n; i++)
			if(b[x][i]==1 && dau[i]==0)
				trungtu(i,b,n,dau);
	}
}

void hautu(int x, int b[][100], int n, int dau[])
{
	dau[x]=1;
	for(int i=0; i<n; i++)
			if(b[x][i]==1 && dau[i]==0)
				hautu(i,b,n,dau);
	printf("%d ", x+1);
}

void duyet(int n, int b[][100])
{
	int dau[n], muc[n], stack[n], ind=0, x=0;
	for(int i=0; i<n; i++)
	{
		muc[i]=-1;
		dau[i]=0;
	}
	stack[0]=b[n][0], muc[stack[0]]=0;
	
	
	
	//duyet tien tu
	printf("\nduyet tien tu\n");
	while(ind>=0)
	{
		int p=stack[ind];
		printf("%d ", p+1);
		ind--;
		x++;
		for(int i=0; i<n; i++)
			if(b[p][i]==1 && muc[i]==-1)
			{
				muc[i]=x;
				ind++;
				stack[ind]=i;
			}
	}
	
	
	
	//duyet trung tu
	printf("\nduyet trung tu\n");
	trungtu(b[n][0],b,n,dau);
	
	
	
	
	
	//duyet hau tu
	for(int i=0; i<n; i++)
		dau[i]=0;
	printf("\nduyet hau tu\n");
	hautu(b[n][0],b,n,dau);
}


int main()
{
	int n, a[100][100];
	nhap(n,a);
	int b[100][100]={0};
	tinh(n,a,b);
	duyet(n,b);
	return 0;
}
