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
	int sum=0;
	for (int i=n; i>0; i/=10)
	{
		int h=i%10;
		sum=sum*10+h;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}

void xuat(int tinh)
{
	if (tinh==1)
		printf("Day la so doi xung");
	else 
		printf("Day khong phai la so doi xung");
}
