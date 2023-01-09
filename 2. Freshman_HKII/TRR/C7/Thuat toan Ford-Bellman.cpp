#include<stdio.h>

void fordbellman(int a[][100], int n)
{
	int v, check=1;
	printf("nhap dinh bat dau: ");
	scanf("%d", &v);
	printf("duong di nho nhat tu %d den\n", v);
	v-=1;
	int d[100], tr[100], hop[100], dem=0;
	for(int i=0; i<n; i++)
	{
		d[i]=a[v][i];
		tr[i]=v;
		if(i!=v) 
		{
			hop[dem]=i;
			dem++;
		}
	}
	d[v]=0;
	while(check==1)
	{
		check=0;
		for(int i=0; i<dem; i++)
			for(int j=0; j<n; j++)
				if(d[hop[i]]>d[hop[j]]+a[hop[j]][hop[i]])
				{
					d[hop[i]]=d[hop[j]]+a[hop[j]][hop[i]];
					tr[hop[i]]=hop[j];
					check=1;
				}
	}
	for(int i=0; i<dem; i++)
		printf("%d la %d\n", hop[i]+1, d[hop[i]]);
}

int main()
{
	int n, a[100][100];
	FILE *f;
	f = fopen("inputFB.txt","rt");
	if (f==NULL)
	{
		printf("Khong mo dc file !");
		return 0;
	}
	fscanf(f,"%d",&n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			fscanf(f,"%d",&a[i][j]);
	fclose(f);
	
	fordbellman(a, n);
	return 0;
}
