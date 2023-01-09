#include <stdio.h>

void nhap(int &n);
int tinh(int n);

void main()
{
	int n;
	nhap(n);
	int kq=tinh(n);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n)
{
	for(int i=1; i<n; i++)
	{
		int dem=0;
		for(int j=1; j<i; j++)
		{
			if(i%j==0)
			dem+=j;
		}
		if(dem==i)
			printf("%d ", i);
	}
	return 0;
}


