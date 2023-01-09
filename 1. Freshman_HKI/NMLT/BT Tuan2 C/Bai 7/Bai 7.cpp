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
	int count=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
			count++;
	}
	return count;
}

void xuat(int tinh)
{
	if(tinh==2)
		printf("Day la so nguyen to");
	else
		printf("Day khong phai la so nguyen to");
}