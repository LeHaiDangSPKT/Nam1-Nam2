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
	int mul=1;
	for(int i=1; i<=n; i++)
		mul*=i;
	return mul;
}

void xuat(int tinh)
{
	printf("%d", tinh);
}
