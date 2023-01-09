#include <stdio.h>
#include <cmath>

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
	int h=sqrt(n);
	if((h*h)==n)
		return 1;
	else
		return 0;
}

void xuat(int tinh)
{
	if(tinh==1)
		printf("So da nhap la so chinh phuong");
	else
		printf("So da nhap khong phai la so chinh phuong");
}
