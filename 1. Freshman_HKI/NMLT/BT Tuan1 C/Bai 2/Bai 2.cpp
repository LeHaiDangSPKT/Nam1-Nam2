#include <stdio.h>

void nhap(int &a, int &b);
int tong(int a, int b);
void xuat(int tong);

int main()
{
	int a,b;
	nhap(a,b);
	int kq=tong(a,b);
	xuat(kq);
	return 0;
}
void nhap(int&a,int&b)
{
	scanf("%d%d", &a,&b);
}
int tong(int a, int b)
{
	int t; 
	t=a+b;
	return t;
}
void xuat(int tong)
{
	printf("%d", tong);
}
	