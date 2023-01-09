#include <stdio.h>

void nhap(int  &n);
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
	int max=n%10;
	int i=n/10; 
	while (i>0)
	{
		int g=i%10;
		if(g > max)
			max=g;
		i/=10;
	}
	return max;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
