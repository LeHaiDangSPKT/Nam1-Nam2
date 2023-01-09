#include <stdio.h>

void nhap(int &a, int &b);
int max(int a, int b);
void xuat(int max);

void main()
{
	int a,b;
	nhap(a,b);
	int kq=max(a,b);
	xuat(kq);
}
void nhap(int&a,int&b)
{
	scanf("%d%d", &a,&b);
}
int max(int a, int b)
{
	int t; 
	if (a>b) 
		t=a;
	else 
		t=b;
	return t;
}
void xuat(int max)
{
	printf("%d", max);
}