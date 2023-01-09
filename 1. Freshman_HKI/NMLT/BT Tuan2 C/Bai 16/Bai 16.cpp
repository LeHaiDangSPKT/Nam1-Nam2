#include <stdio.h>

void nhap(int  &a, int &b);
int tinh(int a, int b);
void xuat(int tinh);

void main()
{
	int a,b;
	nhap(a,b);
	int kq=tinh(a,b);
	xuat(kq);
}

void nhap(int &a, int &b)
{
	scanf("%d", &a);
	scanf("%d", &b);
}

int tinh(int a, int b)
{	
	while (a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
	
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
