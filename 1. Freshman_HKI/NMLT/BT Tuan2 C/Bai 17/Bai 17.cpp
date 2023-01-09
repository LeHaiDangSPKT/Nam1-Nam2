#include <stdio.h>

void nhap(int &n);
int tinh(int n, int &h);

void main()
{
	int n, h;
	nhap(n);
	int kq=tinh(n, h);
}

void nhap(int &n)
{
	scanf("%d", &n);
}

int tinh(int n, int &h)
{
	for(int i=1; i<n; i++)
	{
		int count=0;
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
				count++;
		}		
		if (count==2)
			printf("%d ", i);
	}
	return 0;
}

