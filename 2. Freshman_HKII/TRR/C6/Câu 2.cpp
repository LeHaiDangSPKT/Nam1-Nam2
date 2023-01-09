#include<stdio.h>
#include<stdlib.h>
#define N 100
struct toado
{
	int x,y;
};

void nhap(int &n, int a[][N])
{
	FILE *f;
	f = fopen("DothiPrim.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file doc !");
		return;
	}
	
	fscanf(f,"%d", &n);
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			fscanf(f,"%d", &a[i][j]);
	fclose(f);
}

void tinh(int n, int a[][N])
{
	toado f[n-1];
	int dinh[n-1], ts[n-1], conlai[n-1];
	for(int i=0; i<n; i++)
		conlai[i]=i;
	int ind=-1, x=0, t=0,b;
	while(t<n-1)
	{
		ind++;
		dinh[ind]=x;
		int u=0;
		b=n-ind-1;
		for(int i=0; i<b+1; i++)
			if(conlai[i]!=x) 
			{
				conlai[u]=conlai[i];
				u++;
			}
		int min=100000,p,q;
		for(int i=0; i<=ind; i++)
			for(int j=0; j<b; j++)
				if(a[dinh[i]][conlai[j]]<min && a[dinh[i]][conlai[j]]!=0)
				{
					min=a[dinh[i]][conlai[j]];
					p=dinh[i];
					q=conlai[j];
				}
		f[t].x=p;
		f[t].y=q;
		ts[t]=min;
		x=q;
		t++;
	}
	printf("F={");
	for(int i=0; i<n-1; i++)
	{
		printf("(%d, %d); ", f[i].x+1, f[i].y+1);
	}
	printf("}\nTrong so tuong ung: ");
	
	for(int i=0; i<n-1; i++)
		printf("%d ", ts[i]);
}
int main()
{
	int n, a[N][N];
	nhap(n,a);
	tinh(n,a);
	return 0;
}
