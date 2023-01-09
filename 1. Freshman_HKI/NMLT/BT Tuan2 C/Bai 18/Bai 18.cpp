#include <stdio.h>

void nhap(int &n);
int tinh(int n);
void xuat(int tinh);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
	xuat(kq);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{
	int dem1=0;
	for(int i=1; i<n; i++)
	{
		int dem2=0;
		for(int j=1; j<i; j++)
		{
			if(i%j==0)
			dem2+=j;
		}
		if(dem2==i)
			dem1++;
	}
	return dem1;
}

void xuat(int tinh)
{
	if(tinh==0)
		printf("Khong co hoan hao nao nho hon n");
	else
		printf("%d", tinh);
}