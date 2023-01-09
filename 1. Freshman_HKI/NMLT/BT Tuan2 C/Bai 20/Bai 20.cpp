#include <stdio.h>
#include <cmath>

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
		int h=sqrt(i);
		if((h*h)==i)
			printf("%d ", i);
	}
	return 0;
}

