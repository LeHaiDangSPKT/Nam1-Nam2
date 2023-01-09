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
	int h=1;
	for(int i=2; i<=n; i++)
	{
		if(n%i==0)
		{
			if(i%2==1)
			{
				h=i;
			}
		}
	}
	return h;
}
void xuat(int tinh)
{
	printf("%d", tinh);
}
