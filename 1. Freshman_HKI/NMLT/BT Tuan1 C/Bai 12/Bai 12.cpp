#include <stdio.h>

void nhap(int &a, int &b, int&c);
int min(int a, int b, int c);
void xuat(int min);

void main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=min(a,b,c);
	xuat(kq);
	scanf("%d");
}
void nhap(int&a,int&b, int&c)
{
	scanf("%d%d%d", &a,&b,&c);
}
int min(int a, int b, int c)
{
	int t; 
	if(a<b && a<c) t=a;
    else if (b<a && b<c) t=b;
    else t=c;
	return t;
}
void xuat(int min)
{
	printf("%d", min);
}

















