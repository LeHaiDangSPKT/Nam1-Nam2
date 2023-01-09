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
	int sum=0;
	for (int i=n; i>0; i/=10)
	{
		int h=i%10;
		if (h==2 || h==3 || h==5 || h==7)
		{
			sum++;
		}
	}
	return sum;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
