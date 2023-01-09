#include <stdio.h>
#include <cmath>

void nhap(int &n);
void xuat(int ttd);
int ttd(int n);

void main()
{
	int n;
	nhap(n);
	int kq=ttd(n);
	xuat(kq);
	scanf("%d");
}
void nhap(int &n)
{
	scanf("%d", &n);
}
int ttd(int n)
{
	int t;
	t=abs(n);
	return t;
}
void xuat(int ttd)
{
	printf("%d", ttd);
}	